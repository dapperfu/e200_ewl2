#
# Tools definition 
#

# Reset environment vars you explicitly want to override
#
export MWCIncludes=

# Library file suffix
#
LIBTYPE = .a

# Library file output path
#
LIBOUT = ../lib

# Object file suffix
#
OBJTYPE = .o

# Object file output path (relative to target directory)
#
OBJOUT = obj

# Root directory for all generated command line output
#
OBJDATA_ROOT = EWL_Runtime.$(PLATFORM)-GCC_CmdLineData

# Common include directories, note -I- required if system directories are to
# be searched ( <> type includes )
#

#platform may come in uppercase e.g. PA. It is critical for build on linux
PLATFORM_LOWCASE  = $(shell echo $(PLATFORM) | tr '[:upper:]' '[:lower:]')

INCLUDE_ROOT = ..
INCLUDE = -nostdinc -isystem $(INCLUDE_ROOT)/EWL_C/include
INCLUDE += -isystem $(INCLUDE_ROOT)/EWL_Runtime/include
INCLUDE += -isystem $(INCLUDE_ROOT)/EWL_Runtime/include/$(PLATFORM_LOWCASE)
INCLUDE += -isystem $(INCLUDE_ROOT)/EWL_C/include/extras
SYSINCL = $(INCLUDE)

cwd = $(CURDIR)
CD := cd

#GNU make 3.82 defines only SHELL when running the dos shell
#while 3.81 defines SHELL and COMSPEC when running cygwin
ifdef SHELL
SEPARATOR = ;
MKDIR = mkdir -p $(1)
ZPATH = $(1)
RMDIR = rm -fr $(1)
RM    = rm $(1)
else
# stuck will DOS
SEPARATOR := &
MKDIR = if not exist $(1) (md $(1))
RMDIR = if exist $(1) (rd /s /q $(1))
RM = for %%f in ($(1)) do if exist %%f (del /f /q /s %%f)
ZPATH = $(subst /,\,$(1))
endif

ifneq (,$(findstring cygdrive,$(cwd)))
	cwd := $(shell cygpath -m $(CURDIR))
endif

CXFLAGS	=   $(PLATFORM_FLAGS) -c -fno-builtin $(SYSINCL) -fdata-sections -ffunction-sections  -fdebug-prefix-map="$(cwd)"="$(DEBUG_PREFIX)/EWL_Runtime"
CPPXFLAGS = -nostdinc++ -isystem $(INCLUDE_ROOT)/EWL_C++/include -fno-threadsafe-statics -fno-use-cxa-atexit -frtti  -std=c++0x -fno-builtin -fpermissive
ARFLAGS	=   -r


# include makefiles that define platform variables.
-include config.$(PLATFORM)-GCC.mak

# Compile and Link command variables
COMPILE = $(CC)
LINK = $(AR)


# Search paths for files
#
vpath % src $(PLATFORM_SRCDIR) 

# Determine the library components
#

ALLCFILES := $(wildcard src/*.c)
#ALLCFILES := $(wildcard src/*.c src/cxxabi/*.c)
#ALLCPPFILES := $(wildcard src/*.cpp src/cxxabi/*.cpp)
ALLCPPFILES := $(wildcard src/*.cpp)

ALLCFILES := $(filter-out %/StaticInitializers.c,$(ALLCFILES))

CFILES := $(ALLCFILES) $(PLATFORM_CFILES) 
CPPFILES := $(ALLCPPFILES) $(PLATFORM_CPPFILES) 
HOSTEDFILES := $(ALLHOSTEDFILES) $(PLATFORM_HOSTED_FILES) 
STARTENDFILES := $(PLATFORM_STARTFILE) $(PLATFORM_ENDFILE) 

#
# Exclude these files from the library
#

# Create the object file names
#
CPPOBJS  = $(addsuffix $(OBJTYPE),$(notdir $(basename $(CPPFILES))))
COBJS    = $(addsuffix $(OBJTYPE),$(notdir $(basename $(CFILES))))
ASMOBJS  = $(addsuffix $(OBJTYPE),$(notdir $(basename $(ASMFILES))))
HOSTEDOBJS = $(addsuffix $(OBJTYPE),$(notdir $(basename $(HOSTEDFILES))))
STARTENDOBJS = $(addsuffix $(OBJTYPE),$(notdir $(basename $(STARTENDFILES))))

# Define the target makefile name
#
TARGET_MAK = EWL_Runtime.GCC.mak
TARGETS = $(PLATFORM_TARGETS)

# The common makefile will try to make all targets by recursively calling
# make TARGET=<targetname>. This creates a target consisting of the library
# name with dependencies consisting of all the objects from FILES. A static
# pattern rule defines the .c files for the dependencies of the .o files.
#

# Main target and default target, dependencies expand to 
# e.g. ../lib/<targetname>.a
#
ifndef TARGET
all: $(TARGETS)

$(TARGETS):
	"$(MAKE)" -j6 -f $(TARGET_MAK) TARGET=$@
endif

CPPOBJECTS  = $(addprefix $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/, $(CPPOBJS))
COBJECTS    = $(addprefix $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/, $(COBJS))
ASMOBJECTS  = $(addprefix $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/, $(ASMOBJS))
HOSTEDOBJECTS = $(addprefix $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/, $(HOSTEDOBJS))
STARTENDOBJECTS = $(addprefix $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/, $(STARTENDOBJS))

# Set up target lib object dependencies, e.g. ../Lib/<target>.a : <object dependencies>
#

$(addprefix $(LIBOUT), $(addsuffix $(LIBTYPE),$(TARGET))) : $($(TARGET)OBJECTS) $($(TARGET)OBJECTFILES)
	$(CD) "$(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)" $(SEPARATOR) $(AR) $(ARFLAGS) "$(cwd)"/$@ $(LFLAGS) $(subst $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/,,$($(TARGET)OBJECTS))

$(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT):
	$(call MKDIR,$(call ZPATH,$(dir $(LIBOUT)/$(TARGET))))
	$(call MKDIR,$(call ZPATH,$@))

# Set up object dependencies, e.g. CmdLine/<target>/obj/file.o : file.c
#
$(HOSTEDOBJECTS) $(COBJECTS) : $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/%.o : %.c | $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)
	$(COMPILE) $(CFLAGS) "$<" -o "$@"

$(STARTENDOBJECTS) : $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/%.o : %.c | $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)
	$(COMPILE) $(CFLAGS) "$<" -o $(dir $(addprefix $(LIBOUT), $(addsuffix $(LIBTYPE),$(TARGET))))/$(addsuffix $(HFLAGS).o,$(basename $(notdir $@)))

$(CPPOBJECTS) : $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/%.o : %.cpp | $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)
	$(COMPILE) $(CFLAGS) $(CPPXFLAGS) "$<" -o "$@"

$(ASMOBJECTS) : $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)/%.o : %.s | $(OBJDATA_ROOT)/$(TARGET)/$(OBJOUT)
	$(COMPILE) $(CFLAGS) "$<" -o "$@"

clean:
# Remove generated data files
#
	-rm -rf $(OBJDATA_ROOT)

# Remove library files
#
	-rm -f $(addprefix $(LIBOUT), $(addsuffix $(LIBTYPE),$(TARGETS)))  
	-rm -f $(foreach f, $(notdir $(basename $(STARTENDFILES))), $(foreach g, $(addprefix $(LIBOUT), $(sort $(dir $(TARGETS)))), $g$f*.[od]))

cleanobj:
# Leave the library files intact,  clean up the object files
#
	-rm -rf $(OBJDATA_ROOT)
