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
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Indice.o \
	${OBJECTDIR}/IsChars.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f3

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/EntraPalavra.o \
	${TESTDIR}/tests/TestArquivoQueContem.o \
	${TESTDIR}/tests/TestLerArquivo.o

# C Compiler Flags
CFLAGS=

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/indiceinvertido.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/indiceinvertido.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/indiceinvertido ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Indice.o: Indice.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Indice.o Indice.cpp

${OBJECTDIR}/IsChars.o: IsChars.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/IsChars.o IsChars.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/EntraPalavra.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS}   

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/TestLerArquivo.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   

${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/TestArquivoQueContem.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS}   


${TESTDIR}/tests/EntraPalavra.o: tests/EntraPalavra.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/EntraPalavra.o tests/EntraPalavra.cpp


${TESTDIR}/tests/TestLerArquivo.o: tests/TestLerArquivo.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TestLerArquivo.o tests/TestLerArquivo.cpp


${TESTDIR}/tests/TestArquivoQueContem.o: tests/TestArquivoQueContem.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TestArquivoQueContem.o tests/TestArquivoQueContem.cpp


${OBJECTDIR}/Indice_nomain.o: ${OBJECTDIR}/Indice.o Indice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Indice.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Indice_nomain.o Indice.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Indice.o ${OBJECTDIR}/Indice_nomain.o;\
	fi

${OBJECTDIR}/IsChars_nomain.o: ${OBJECTDIR}/IsChars.o IsChars.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/IsChars.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/IsChars_nomain.o IsChars.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/IsChars.o ${OBJECTDIR}/IsChars_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
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
