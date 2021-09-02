#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/funcion/funcion.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f10 \
	${TESTDIR}/TestFiles/f9 \
	${TESTDIR}/TestFiles/f7 \
	${TESTDIR}/TestFiles/f5 \
	${TESTDIR}/TestFiles/f8 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f6 \
	${TESTDIR}/TestFiles/f3

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/borar.o \
	${TESTDIR}/tests/cero.o \
	${TESTDIR}/tests/invertir_.o \
	${TESTDIR}/tests/modificar_.o \
	${TESTDIR}/tests/newcunittest8.o \
	${TESTDIR}/tests/newcunittest9.o \
	${TESTDIR}/tests/ordenamiento.o \
	${TESTDIR}/tests/producto.o \
	${TESTDIR}/tests/redimencionar_.o \
	${TESTDIR}/tests/trasponer_.o

# C Compiler Flags
CFLAGS=-fprofile-arcs -ftest-coverage

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/funcion/funcion.o: funcion/funcion.c
	${MKDIR} -p ${OBJECTDIR}/funcion
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion/funcion.o funcion/funcion.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f10: ${TESTDIR}/tests/borar.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f10 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f9: ${TESTDIR}/tests/newcunittest8.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f9 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f7: ${TESTDIR}/tests/newcunittest9.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f7 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f5: ${TESTDIR}/tests/invertir_.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f5 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f8: ${TESTDIR}/tests/modificar_.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f8 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f4: ${TESTDIR}/tests/producto.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/ordenamiento.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/cero.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f6: ${TESTDIR}/tests/redimencionar_.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f6 $^ ${LDLIBSOPTIONS}   -lcunit 

${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/trasponer_.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.c} -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS}   -lcunit 


${TESTDIR}/tests/borar.o: tests/borar.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/borar.o tests/borar.c


${TESTDIR}/tests/newcunittest8.o: tests/newcunittest8.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/newcunittest8.o tests/newcunittest8.c


${TESTDIR}/tests/newcunittest9.o: tests/newcunittest9.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/newcunittest9.o tests/newcunittest9.c


${TESTDIR}/tests/invertir_.o: tests/invertir_.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/invertir_.o tests/invertir_.c


${TESTDIR}/tests/modificar_.o: tests/modificar_.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/modificar_.o tests/modificar_.c


${TESTDIR}/tests/producto.o: tests/producto.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/producto.o tests/producto.c


${TESTDIR}/tests/ordenamiento.o: tests/ordenamiento.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ordenamiento.o tests/ordenamiento.c


${TESTDIR}/tests/cero.o: tests/cero.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/cero.o tests/cero.c


${TESTDIR}/tests/redimencionar_.o: tests/redimencionar_.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/redimencionar_.o tests/redimencionar_.c


${TESTDIR}/tests/trasponer_.o: tests/trasponer_.c 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/trasponer_.o tests/trasponer_.c


${OBJECTDIR}/funcion/funcion_nomain.o: ${OBJECTDIR}/funcion/funcion.o funcion/funcion.c 
	${MKDIR} -p ${OBJECTDIR}/funcion
	@NMOUTPUT=`${NM} ${OBJECTDIR}/funcion/funcion.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.c) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion/funcion_nomain.o funcion/funcion.c;\
	else  \
	    ${CP} ${OBJECTDIR}/funcion/funcion.o ${OBJECTDIR}/funcion/funcion_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.c 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.c) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.c;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f10 || true; \
	    ${TESTDIR}/TestFiles/f9 || true; \
	    ${TESTDIR}/TestFiles/f7 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	    ${TESTDIR}/TestFiles/f8 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f6 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
