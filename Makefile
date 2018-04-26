VENDOR?=GCC

all:
	"$(MAKE)" -f EWL_C.$(VENDOR).mak -C EWL_C
	"$(MAKE)" -f EWL_C++.$(VENDOR).mak -C EWL_C++
	"$(MAKE)" -f EWL_Runtime.$(VENDOR).mak -C EWL_Runtime

c:
	"$(MAKE)" -j6 -f EWL_C.$(VENDOR).mak -C EWL_C

cpp:
	"$(MAKE)" -j6 -f EWL_C++.$(VENDOR).mak -C EWL_C++

rt:
	"$(MAKE)" -j6 -f EWL_Runtime.$(VENDOR).mak -C EWL_Runtime

cleanobj:
	"$(MAKE)" -j6 -f EWL_C.$(VENDOR).mak -C EWL_C cleanobj 
	"$(MAKE)" -j6 -f EWL_C++.$(VENDOR).mak -C EWL_C++ cleanobj
	"$(MAKE)" -j6 -f EWL_Runtime.$(VENDOR).mak  -C EWL_Runtime cleanobj

clean:
	"$(MAKE)" -j6 -f EWL_C.$(VENDOR).mak -C EWL_C clean 
	"$(MAKE)" -j6 -f EWL_C++.$(VENDOR).mak -C EWL_C++ clean
	"$(MAKE)" -j6 -f EWL_Runtime.$(VENDOR).mak  -C EWL_Runtime clean
	@rm -fr doc

doc:
	doxygen Doxyfile
