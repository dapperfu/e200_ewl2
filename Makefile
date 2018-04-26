# Default vendor if not otherwise specified
VENDOR?=GCC

all:
	${MAKE} c
	${MAKE} cpp
	${MAKE} rt

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
	@git clean -xfd

doc:
	doxygen Doxyfile
