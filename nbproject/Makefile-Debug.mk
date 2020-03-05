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
	${OBJECTDIR}/_ext/9a6f7ef7/sqlite3.o \
	${OBJECTDIR}/database.o \
	${OBJECTDIR}/index.o \
	${OBJECTDIR}/order.o


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
LDLIBSOPTIONS=-L../test/lib

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tapioca.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tapioca.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tapioca ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/9a6f7ef7/sqlite3.o: ../test/lib/sqlite3.c
	${MKDIR} -p ${OBJECTDIR}/_ext/9a6f7ef7
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/9a6f7ef7/sqlite3.o ../test/lib/sqlite3.c

${OBJECTDIR}/database.o: database.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../test/lib -include ../test/lib/sqlite3.h -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/database.o database.cpp

${OBJECTDIR}/index.o: index.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../test/lib -include ../test/lib/sqlite3.h -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/index.o index.cpp

${OBJECTDIR}/order.o: order.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../test/lib -include ../test/lib/sqlite3.h -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/order.o order.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
