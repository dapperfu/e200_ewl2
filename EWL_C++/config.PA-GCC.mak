#
# target definitions
#

E200z0_S_CONFIG		= E200z0_Soft

E200z2_S_CONFIG		= E200z2_Soft
E200z2_CONFIG		= E200z2
E200z2_S_BOOKE_CONFIG	= E200z2_Soft_BookE
E200z2_BOOKE_CONFIG	= E200z2_BookE

E200z3_S_CONFIG		= E200z3_Soft
E200z3_CONFIG		= E200z3
E200z3_V_S_CONFIG	= E200z3_SPE_Soft
E200z3_V_CONFIG		= E200z3_SPE
E200z3_S_BOOKE_CONFIG	= E200z3_Soft_BookE
E200z3_BOOKE_CONFIG	= E200z3_BookE
E200z3_V_S_BOOKE_CONFIG	= E200z3_SPE_Soft_BookE
E200z3_V_BOOKE_CONFIG	= E200z3_SPE_BookE

E200z4_S_CONFIG		= E200z4_Soft
E200z4_CONFIG		= E200z4
E200z4_V_S_CONFIG	= E200z4_SPE_Soft
E200z4_V_CONFIG		= E200z4_SPE
E200z4_S_BOOKE_CONFIG	= E200z4_Soft_BookE
E200z4_BOOKE_CONFIG	= E200z4_BookE
E200z4_V_S_BOOKE_CONFIG	= E200z4_SPE_Soft_BookE
E200z4_V_BOOKE_CONFIG	= E200z4_SPE_BookE

E200z6_S_CONFIG		= E200z6_Soft
E200z6_CONFIG		= E200z6
E200z6_V_S_CONFIG	= E200z6_SPE_Soft
E200z6_V_CONFIG		= E200z6_SPE
E200z6_S_BOOKE_CONFIG	= E200z6_Soft_BookE
E200z6_BOOKE_CONFIG	= E200z6_BookE
E200z6_V_S_BOOKE_CONFIG	= E200z6_SPE_Soft_BookE
E200z6_V_BOOKE_CONFIG	= E200z6_SPE_BookE

E200z7_S_CONFIG		= E200z7_Soft
E200z7_CONFIG		= E200z7
E200z7_V_S_CONFIG	= E200z7_SPE_Soft
E200z7_V_CONFIG		= E200z7_SPE
E200z7_S_BOOKE_CONFIG	= E200z7_Soft_BookE
E200z7_BOOKE_CONFIG	= E200z7_BookE
E200z7_V_S_BOOKE_CONFIG	= E200z7_SPE_Soft_BookE
E200z7_V_BOOKE_CONFIG	= E200z7_SPE_BookE

BASIC_ALIGN_4_CFLAGS			= -funsigned-char -mbig -misel -mregnames 
BASIC_VLE_CFLAGS			= -mvle -D__PPC_VLE__=1
BASIC_BOOKE_CFLAGS			= -mno-vle

BASIC_ALIGN_4_SOFT_CFLAGS		= -mno-spe -msoft-float $(BASIC_ALIGN_4_CFLAGS) $(BASIC_VLE_CFLAGS)
BASIC_ALIGN_4_SPFP_CFLAGS		= -mno-spe -mfpu=sp_full -mfloat-gprs=single $(BASIC_ALIGN_4_CFLAGS) $(BASIC_VLE_CFLAGS)
BASIC_ALIGN_4_SOFT_SPE1_CFLAGS		= -mspe -mabi=spe -msoft-float $(BASIC_ALIGN_4_CFLAGS) $(BASIC_VLE_CFLAGS)
BASIC_ALIGN_4_SPFP_SPE1_CFLAGS		= -mspe -mabi=spe -mfpu=sp_full -mfloat-gprs=single $(BASIC_ALIGN_4_CFLAGS) $(BASIC_VLE_CFLAGS)
BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS		= -mno-spe -msoft-float $(BASIC_ALIGN_4_CFLAGS) $(BASIC_BOOKE_CFLAGS)
BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS		= -mno-spe -mfpu=sp_full -mfloat-gprs=single $(BASIC_ALIGN_4_CFLAGS) $(BASIC_BOOKE_CFLAGS)
BASIC_ALIGN_4_SOFT_SPE1_BOOKE_CFLAGS	= -mspe -mabi=spe -msoft-float $(BASIC_ALIGN_4_CFLAGS) $(BASIC_BOOKE_CFLAGS)
BASIC_ALIGN_4_SPFP_SPE1_BOOKE_CFLAGS	= -mspe -mabi=spe -mfpu=sp_full -mfloat-gprs=single $(BASIC_ALIGN_4_CFLAGS) $(BASIC_BOOKE_CFLAGS)

$(E200z0_S_CONFIG)_CFLAGS		= -mcpu=e200z0 $(BASIC_ALIGN_4_SOFT_CFLAGS)

$(E200z2_S_CONFIG)_CFLAGS		= -mcpu=e200z2 $(BASIC_ALIGN_4_SOFT_CFLAGS)
$(E200z2_CONFIG)_CFLAGS			= -mcpu=e200z2 $(BASIC_ALIGN_4_SPFP_CFLAGS)
$(E200z2_S_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z2 $(BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS)
$(E200z2_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z2 $(BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS)

$(E200z3_S_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SOFT_CFLAGS)
$(E200z3_CONFIG)_CFLAGS			= -mcpu=e200z3 $(BASIC_ALIGN_4_SPFP_CFLAGS)
$(E200z3_V_S_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SOFT_SPE1_CFLAGS)
$(E200z3_V_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SPFP_SPE1_CFLAGS)
$(E200z3_S_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS)
$(E200z3_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS)
$(E200z3_V_S_BOOKE_CONFIG)_CFLAGS	= -mcpu=e200z3 $(BASIC_ALIGN_4_SOFT_SPE1_BOOKE_CFLAGS)
$(E200z3_V_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z3 $(BASIC_ALIGN_4_SPFP_SPE1_BOOKE_CFLAGS)

$(E200z4_S_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SOFT_CFLAGS)
$(E200z4_CONFIG)_CFLAGS			= -mcpu=e200z4 $(BASIC_ALIGN_4_SPFP_CFLAGS)
$(E200z4_V_S_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SOFT_SPE1_CFLAGS)
$(E200z4_V_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SPFP_SPE1_CFLAGS)
$(E200z4_S_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS)
$(E200z4_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS)
$(E200z4_V_S_BOOKE_CONFIG)_CFLAGS	= -mcpu=e200z4 $(BASIC_ALIGN_4_SOFT_SPE1_BOOKE_CFLAGS)
$(E200z4_V_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z4 $(BASIC_ALIGN_4_SPFP_SPE1_BOOKE_CFLAGS)

$(E200z6_S_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SOFT_CFLAGS)
$(E200z6_CONFIG)_CFLAGS			= -mcpu=e200z6 $(BASIC_ALIGN_4_SPFP_CFLAGS)
$(E200z6_V_S_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SOFT_SPE1_CFLAGS)
$(E200z6_V_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SPFP_SPE1_CFLAGS)
$(E200z6_S_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS)
$(E200z6_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS)
$(E200z6_V_S_BOOKE_CONFIG)_CFLAGS	= -mcpu=e200z6 $(BASIC_ALIGN_4_SOFT_SPE1_BOOKE_CFLAGS)
$(E200z6_V_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z6 $(BASIC_ALIGN_4_SPFP_SPE1_BOOKE_CFLAGS)

$(E200z7_S_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SOFT_CFLAGS)
$(E200z7_CONFIG)_CFLAGS			= -mcpu=e200z7 $(BASIC_ALIGN_4_SPFP_CFLAGS)
$(E200z7_V_S_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SOFT_SPE1_CFLAGS)
$(E200z7_V_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SPFP_SPE1_CFLAGS)
$(E200z7_S_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SOFT_BOOKE_CFLAGS)
$(E200z7_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SPFP_BOOKE_CFLAGS)
$(E200z7_V_S_BOOKE_CONFIG)_CFLAGS	= -mcpu=e200z7 $(BASIC_ALIGN_4_SOFT_SPE1_BOOKE_CFLAGS)
$(E200z7_V_BOOKE_CONFIG)_CFLAGS		= -mcpu=e200z7 $(BASIC_ALIGN_4_SPFP_SPE1_BOOKE_CFLAGS)

TOOLS_ROOT = $(POWERPC_TOOLS)
TOOLS = $(TOOLS_ROOT)/bin
CC = "$(TOOLS)/powerpc-eabivle-gcc"
AR = "$(TOOLS)/powerpc-eabivle-ar"
#CC = $(TOOLS)/ppc-vle-gcc
#AR = $(TOOLS)/ppc-vle-ar

#
#
# End tools definition


OPTS=-Os -g -ffunction-sections -fdata-sections
#OPTS=-Os -fkeep-inline-functions -ftracer -ffunction-sections -fdata-sections
#OPTS=-O0 -gdwarf-2 -gstrict-dwarf

PLATFORM_FLAGS	=   -D__PPC_EABI__=1 -meabi $(OPTS) -c $(SYSINCL)
DEBUG_PREFIX	= S32DS/e200_ewl2

# Target name definition and target specific build flags
#
TSTDCPP_$(E200z0_S_CONFIG) = libstdc++
TSTDCPP_$(E200z0_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z0_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z0_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z0_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z2_S_CONFIG) = e200z2/libstdc++
TSTDCPP_$(E200z2_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z2_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z2_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z2_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z2_CONFIG) = e200z2/fp/libstdc++
TSTDCPP_$(E200z2_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z2_CONFIG)_CFLAGS)
TSTDCPP_$(E200z2_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z2_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z2_S_BOOKE_CONFIG) = e200z2/booke/libstdc++
TSTDCPP_$(E200z2_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z2_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z2_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z2_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z2_BOOKE_CONFIG) = e200z2/fp/booke/libstdc++
TSTDCPP_$(E200z2_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z2_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z2_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z2_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_S_CONFIG) = e200z3/libstdc++
TSTDCPP_$(E200z3_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_CONFIG) = e200z3/fp/libstdc++
TSTDCPP_$(E200z3_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_V_S_CONFIG) = e200z3/spe/libstdc++
TSTDCPP_$(E200z3_V_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_V_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_V_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_V_CONFIG) = e200z3/fp/spe/libstdc++
TSTDCPP_$(E200z3_V_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_V_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_V_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_S_BOOKE_CONFIG) = e200z3/booke/libstdc++
TSTDCPP_$(E200z3_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_BOOKE_CONFIG) = e200z3/fp/booke/libstdc++
TSTDCPP_$(E200z3_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG) = e200z3/spe/booke/libstdc++
TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_V_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z3_V_BOOKE_CONFIG) = e200z3/fp/spe/booke/libstdc++
TSTDCPP_$(E200z3_V_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z3_V_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z3_V_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z3_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_S_CONFIG) = e200z4/libstdc++
TSTDCPP_$(E200z4_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_CONFIG) = e200z4/fp/libstdc++
TSTDCPP_$(E200z4_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_V_S_CONFIG) = e200z4/spe/libstdc++
TSTDCPP_$(E200z4_V_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_V_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_V_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_V_CONFIG) = e200z4/fp/spe/libstdc++
TSTDCPP_$(E200z4_V_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_V_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_V_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_S_BOOKE_CONFIG) = e200z4/booke/libstdc++
TSTDCPP_$(E200z4_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_BOOKE_CONFIG) = e200z4/fp/booke/libstdc++
TSTDCPP_$(E200z4_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG) = e200z4/spe/booke/libstdc++
TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_V_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z4_V_BOOKE_CONFIG) = e200z4/fp/spe/booke/libstdc++
TSTDCPP_$(E200z4_V_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z4_V_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z4_V_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z4_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_S_CONFIG) = e200z6/libstdc++
TSTDCPP_$(E200z6_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_CONFIG) = e200z6/fp/libstdc++
TSTDCPP_$(E200z6_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_V_S_CONFIG) = e200z6/spe/libstdc++
TSTDCPP_$(E200z6_V_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_V_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_V_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_V_CONFIG) = e200z6/fp/spe/libstdc++
TSTDCPP_$(E200z6_V_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_V_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_V_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_S_BOOKE_CONFIG) = e200z6/booke/libstdc++
TSTDCPP_$(E200z6_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_BOOKE_CONFIG) = e200z6/fp/booke/libstdc++
TSTDCPP_$(E200z6_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG) = e200z6/spe/booke/libstdc++
TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_V_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z6_V_BOOKE_CONFIG) = e200z6/fp/spe/booke/libstdc++
TSTDCPP_$(E200z6_V_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z6_V_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z6_V_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z6_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_S_CONFIG) = e200z7/libstdc++
TSTDCPP_$(E200z7_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_CONFIG) = e200z7/fp/libstdc++
TSTDCPP_$(E200z7_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_V_S_CONFIG) = e200z7/spe/libstdc++
TSTDCPP_$(E200z7_V_S_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_V_S_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_V_S_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_V_CONFIG) = e200z7/fp/spe/libstdc++
TSTDCPP_$(E200z7_V_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_V_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_V_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_S_BOOKE_CONFIG) = e200z7/booke/libstdc++
TSTDCPP_$(E200z7_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_BOOKE_CONFIG) = e200z7/fp/booke/libstdc++
TSTDCPP_$(E200z7_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG) = e200z7/spe/booke/libstdc++
TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_V_S_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TSTDCPP_$(E200z7_V_BOOKE_CONFIG) = e200z7/fp/spe/booke/libstdc++
TSTDCPP_$(E200z7_V_BOOKE_CONFIG)CFLAGS = -include lib_c++.prefix -D_EWL_C_LOCALE_ONLY=1 $($(E200z7_V_BOOKE_CONFIG)_CFLAGS)
TSTDCPP_$(E200z7_V_BOOKE_CONFIG)LFLAGS =
$(TSTDCPP_$(E200z7_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

PLATFORM_TARGETS_STDCPP  = $(TSTDCPP_$(E200z0_S_CONFIG))
PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z2_S_CONFIG)) $(TSTDCPP_$(E200z2_CONFIG)) 
#PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z2_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z2_BOOKE_CONFIG))
PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z3_S_CONFIG)) $(TSTDCPP_$(E200z3_CONFIG)) $(TSTDCPP_$(E200z3_V_S_CONFIG)) $(TSTDCPP_$(E200z3_V_CONFIG))
#PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z3_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z3_BOOKE_CONFIG)) $(TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z3_V_BOOKE_CONFIG))
PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z4_S_CONFIG)) $(TSTDCPP_$(E200z4_CONFIG)) $(TSTDCPP_$(E200z4_V_S_CONFIG)) $(TSTDCPP_$(E200z4_V_CONFIG))
#PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z4_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z4_BOOKE_CONFIG)) $(TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z4_V_BOOKE_CONFIG))
PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z6_S_CONFIG)) $(TSTDCPP_$(E200z6_CONFIG)) $(TSTDCPP_$(E200z6_V_S_CONFIG)) $(TSTDCPP_$(E200z6_V_CONFIG))
#PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z6_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z6_BOOKE_CONFIG)) $(TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z6_V_BOOKE_CONFIG))
PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z7_S_CONFIG)) $(TSTDCPP_$(E200z7_CONFIG)) $(TSTDCPP_$(E200z7_V_S_CONFIG)) $(TSTDCPP_$(E200z7_V_CONFIG))
#PLATFORM_TARGETS_STDCPP += $(TSTDCPP_$(E200z7_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z7_BOOKE_CONFIG)) $(TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG)) $(TSTDCPP_$(E200z7_V_BOOKE_CONFIG))

TCPP_$(E200z0_S_CONFIG) = libc++
TCPP_$(E200z0_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z0_S_CONFIG)_CFLAGS)
TCPP_$(E200z0_S_CONFIG)LFLAGS =
$(TCPP_$(E200z0_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z2_S_CONFIG) = e200z2/libc++
TCPP_$(E200z2_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z2_S_CONFIG)_CFLAGS)
TCPP_$(E200z2_S_CONFIG)LFLAGS =
$(TCPP_$(E200z2_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z2_CONFIG) = e200z2/fp/libc++
TCPP_$(E200z2_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z2_CONFIG)_CFLAGS)
TCPP_$(E200z2_CONFIG)LFLAGS =
$(TCPP_$(E200z2_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z2_S_BOOKE_CONFIG) = e200z2/booke/libc++
TCPP_$(E200z2_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z2_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z2_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z2_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z2_BOOKE_CONFIG) = e200z2/fp/booke/libc++
TCPP_$(E200z2_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z2_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z2_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z2_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_S_CONFIG) = e200z3/libc++
TCPP_$(E200z3_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_S_CONFIG)_CFLAGS)
TCPP_$(E200z3_S_CONFIG)LFLAGS =
$(TCPP_$(E200z3_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_CONFIG) = e200z3/fp/libc++
TCPP_$(E200z3_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_CONFIG)_CFLAGS)
TCPP_$(E200z3_CONFIG)LFLAGS =
$(TCPP_$(E200z3_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_V_S_CONFIG) = e200z3/spe/libc++
TCPP_$(E200z3_V_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_V_S_CONFIG)_CFLAGS)
TCPP_$(E200z3_V_S_CONFIG)LFLAGS =
$(TCPP_$(E200z3_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_V_CONFIG) = e200z3/fp/spe/libc++
TCPP_$(E200z3_V_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_V_CONFIG)_CFLAGS)
TCPP_$(E200z3_V_CONFIG)LFLAGS =
$(TCPP_$(E200z3_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_S_BOOKE_CONFIG) = e200z3/booke/libc++
TCPP_$(E200z3_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z3_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z3_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_BOOKE_CONFIG) = e200z3/fp/booke/libc++
TCPP_$(E200z3_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z3_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z3_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_V_S_BOOKE_CONFIG) = e200z3/spe/booke/libc++
TCPP_$(E200z3_V_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_V_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z3_V_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z3_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z3_V_BOOKE_CONFIG) = e200z3/fp/spe/booke/libc++
TCPP_$(E200z3_V_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z3_V_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z3_V_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z3_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_S_CONFIG) = e200z4/libc++
TCPP_$(E200z4_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_S_CONFIG)_CFLAGS)
TCPP_$(E200z4_S_CONFIG)LFLAGS =
$(TCPP_$(E200z4_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_CONFIG) = e200z4/fp/libc++
TCPP_$(E200z4_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_CONFIG)_CFLAGS)
TCPP_$(E200z4_CONFIG)LFLAGS =
$(TCPP_$(E200z4_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_V_S_CONFIG) = e200z4/spe/libc++
TCPP_$(E200z4_V_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_V_S_CONFIG)_CFLAGS)
TCPP_$(E200z4_V_S_CONFIG)LFLAGS =
$(TCPP_$(E200z4_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_V_CONFIG) = e200z4/fp/spe/libc++
TCPP_$(E200z4_V_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_V_CONFIG)_CFLAGS)
TCPP_$(E200z4_V_CONFIG)LFLAGS =
$(TCPP_$(E200z4_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_S_BOOKE_CONFIG) = e200z4/booke/libc++
TCPP_$(E200z4_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z4_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z4_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_BOOKE_CONFIG) = e200z4/fp/booke/libc++
TCPP_$(E200z4_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z4_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z4_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_V_S_BOOKE_CONFIG) = e200z4/spe/booke/libc++
TCPP_$(E200z4_V_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_V_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z4_V_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z4_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z4_V_BOOKE_CONFIG) = e200z4/fp/spe/booke/libc++
TCPP_$(E200z4_V_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z4_V_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z4_V_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z4_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_S_CONFIG) = e200z6/libc++
TCPP_$(E200z6_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_S_CONFIG)_CFLAGS)
TCPP_$(E200z6_S_CONFIG)LFLAGS =
$(TCPP_$(E200z6_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_CONFIG) = e200z6/fp/libc++
TCPP_$(E200z6_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_CONFIG)_CFLAGS)
TCPP_$(E200z6_CONFIG)LFLAGS =
$(TCPP_$(E200z6_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_V_S_CONFIG) = e200z6/spe/libc++
TCPP_$(E200z6_V_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_V_S_CONFIG)_CFLAGS)
TCPP_$(E200z6_V_S_CONFIG)LFLAGS =
$(TCPP_$(E200z6_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_V_CONFIG) = e200z6/fp/spe/libc++
TCPP_$(E200z6_V_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_V_CONFIG)_CFLAGS)
TCPP_$(E200z6_V_CONFIG)LFLAGS =
$(TCPP_$(E200z6_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_S_BOOKE_CONFIG) = e200z6/booke/libc++
TCPP_$(E200z6_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z6_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z6_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_BOOKE_CONFIG) = e200z6/fp/booke/libc++
TCPP_$(E200z6_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z6_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z6_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_V_S_BOOKE_CONFIG) = e200z6/spe/booke/libc++
TCPP_$(E200z6_V_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_V_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z6_V_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z6_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z6_V_BOOKE_CONFIG) = e200z6/fp/spe/booke/libc++
TCPP_$(E200z6_V_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z6_V_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z6_V_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z6_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_S_CONFIG) = e200z7/libc++
TCPP_$(E200z7_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_S_CONFIG)_CFLAGS)
TCPP_$(E200z7_S_CONFIG)LFLAGS =
$(TCPP_$(E200z7_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_CONFIG) = e200z7/fp/libc++
TCPP_$(E200z7_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_CONFIG)_CFLAGS)
TCPP_$(E200z7_CONFIG)LFLAGS =
$(TCPP_$(E200z7_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_V_S_CONFIG) = e200z7/spe/libc++
TCPP_$(E200z7_V_S_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_V_S_CONFIG)_CFLAGS)
TCPP_$(E200z7_V_S_CONFIG)LFLAGS =
$(TCPP_$(E200z7_V_S_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_V_CONFIG) = e200z7/fp/spe/libc++
TCPP_$(E200z7_V_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_V_CONFIG)_CFLAGS)
TCPP_$(E200z7_V_CONFIG)LFLAGS =
$(TCPP_$(E200z7_V_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_S_BOOKE_CONFIG) = e200z7/booke/libc++
TCPP_$(E200z7_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z7_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z7_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_BOOKE_CONFIG) = e200z7/fp/booke/libc++
TCPP_$(E200z7_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z7_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z7_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_V_S_BOOKE_CONFIG) = e200z7/spe/booke/libc++
TCPP_$(E200z7_V_S_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_V_S_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z7_V_S_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z7_V_S_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

TCPP_$(E200z7_V_BOOKE_CONFIG) = e200z7/fp/spe/booke/libc++
TCPP_$(E200z7_V_BOOKE_CONFIG)CFLAGS = -include lib_ewl_c++.prefix $($(E200z7_V_BOOKE_CONFIG)_CFLAGS)
TCPP_$(E200z7_V_BOOKE_CONFIG)LFLAGS =
$(TCPP_$(E200z7_V_BOOKE_CONFIG))OBJECTS = $(CPPOBJECTS)

PLATFORM_TARGETS_CPP  = $(TCPP_$(E200z0_S_CONFIG))
PLATFORM_TARGETS_CPP += $(TCPP_$(E200z2_S_CONFIG)) $(TCPP_$(E200z2_CONFIG)) 
#PLATFORM_TARGETS_CPP += $(TCPP_$(E200z2_S_BOOKE_CONFIG)) $(TCPP_$(E200z2_BOOKE_CONFIG))
PLATFORM_TARGETS_CPP += $(TCPP_$(E200z3_S_CONFIG)) $(TCPP_$(E200z3_CONFIG)) $(TCPP_$(E200z3_V_S_CONFIG)) $(TCPP_$(E200z3_V_CONFIG))
#PLATFORM_TARGETS_CPP += $(TCPP_$(E200z3_S_BOOKE_CONFIG)) $(TCPP_$(E200z3_BOOKE_CONFIG)) $(TCPP_$(E200z3_V_S_BOOKE_CONFIG)) $(TCPP_$(E200z3_V_BOOKE_CONFIG))
PLATFORM_TARGETS_CPP += $(TCPP_$(E200z4_S_CONFIG)) $(TCPP_$(E200z4_CONFIG)) $(TCPP_$(E200z4_V_S_CONFIG)) $(TCPP_$(E200z4_V_CONFIG))
#PLATFORM_TARGETS_CPP += $(TCPP_$(E200z4_S_BOOKE_CONFIG)) $(TCPP_$(E200z4_BOOKE_CONFIG)) $(TCPP_$(E200z4_V_S_BOOKE_CONFIG)) $(TCPP_$(E200z4_V_BOOKE_CONFIG))
PLATFORM_TARGETS_CPP += $(TCPP_$(E200z6_S_CONFIG)) $(TCPP_$(E200z6_CONFIG)) $(TCPP_$(E200z6_V_S_CONFIG)) $(TCPP_$(E200z6_V_CONFIG))
#PLATFORM_TARGETS_CPP += $(TCPP_$(E200z6_S_BOOKE_CONFIG)) $(TCPP_$(E200z6_BOOKE_CONFIG)) $(TCPP_$(E200z6_V_S_BOOKE_CONFIG)) $(TCPP_$(E200z6_V_BOOKE_CONFIG))
PLATFORM_TARGETS_CPP += $(TCPP_$(E200z7_S_CONFIG)) $(TCPP_$(E200z7_CONFIG)) $(TCPP_$(E200z7_V_S_CONFIG)) $(TCPP_$(E200z7_V_CONFIG))
#PLATFORM_TARGETS_CPP += $(TCPP_$(E200z7_S_BOOKE_CONFIG)) $(TCPP_$(E200z7_BOOKE_CONFIG)) $(TCPP_$(E200z7_V_S_BOOKE_CONFIG)) $(TCPP_$(E200z7_V_BOOKE_CONFIG))


# Set target specific variables  
# Target specific variables settings take effect when the target found is being processed.
# So it is possible that a make variable will have different values, depending on the target being built.
# Note the scope of the setting follows the dependencies. So whatever objs are required to 
# build this target, the object dependency required to be built will get this setting. 
# E.g. ../lib/TSTDCPP_1.a : compiler flags =  TSTDCPP_1 flags 
# Target specific variables settings are created using the settargetvars macro.
#
settargetvars=$(addprefix $(LIBOUT)/, $(addsuffix $(LIBTYPE),$($1))) : $2FLAGS=$($2XFLAGS) $($1$2FLAGS) 

# As an example, the first two macro calls calls below expand to :
# $(addprefix $(LIBOUT)/, $(addsuffix $(LIBTYPE),$(TSTDCPP_1))) : CFLAGS=$(CXFLAGS) $(TSTDCPP_1CFLAGS) 
# $(addprefix $(LIBOUT)/, $(addsuffix $(LIBTYPE),$(TSTDCPP_1))) : LFLAGS=$(LXFLAGS) $(TSTDCPP_1LFLAGS) 
#
# and utimately to rule such as:
#
# ../lib/<target>.a	: 	CFLAGS=$(CXFLAGS) $(TSTDCPP_1CFLAGS)
# ../lib/<target>.a	: 	LFLAGS=$(LXFLAGS) $(TSTDCPP_1LFLAGS)
#
#
# This sets the CFLAGS and LFLAGS variables according to the target being built. The CFLAGS
# and LFLAGS settings is carried to the dependencies of this target also. So any objects
# that need to get built to make the target library get these CFLAGS and LFLAGS settings, also.
#

$(call settargetvars,TSTDCPP_$(E200z0_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z0_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z2_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z2_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z2_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z2_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z2_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z2_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z2_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z2_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_V_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_V_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_V_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_V_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z3_V_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z3_V_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_V_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_V_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_V_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_V_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z4_V_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z4_V_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_V_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_V_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_V_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_V_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z6_V_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z6_V_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_V_S_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_V_S_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_V_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_V_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TSTDCPP_$(E200z7_V_BOOKE_CONFIG),C)
$(call settargetvars,TSTDCPP_$(E200z7_V_BOOKE_CONFIG),L)

$(call settargetvars,TCPP_$(E200z0_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z0_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z2_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z2_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z2_CONFIG),C)
$(call settargetvars,TCPP_$(E200z2_CONFIG),L)
$(call settargetvars,TCPP_$(E200z2_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z2_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z2_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z2_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_V_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_V_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_V_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_V_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z3_V_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z3_V_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_V_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_V_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_V_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_V_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z4_V_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z4_V_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_V_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_V_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_V_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_V_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z6_V_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z6_V_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_V_S_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_V_S_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_V_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_V_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_V_S_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_V_S_BOOKE_CONFIG),L)
$(call settargetvars,TCPP_$(E200z7_V_BOOKE_CONFIG),C)
$(call settargetvars,TCPP_$(E200z7_V_BOOKE_CONFIG),L)


# Search paths for files
#
PLATFORM_SRCDIR = src/pa

# Determine the library components
#

PLATFORM_CPPFILES = 
#
# Exclude these files from the library
#
