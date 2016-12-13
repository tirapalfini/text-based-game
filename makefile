######################################################################################
# File: Makefile
# Description: This is the makefile for CaveGame.  To create the program in command 
# line type 'make CaveGame’
######################################################################################

#Compiler
CXX = g++

#Compile flags
CXXFLAGS = -std=c++0x

#Warnings
CXXFLAGS += -Wall

#Errors
CXXFLAGS += -pedantic-errors

#Debug
CXXFLAGS += -g

####################
### USER SECTION ###
####################

#Source files
SRC1 = backpack.cpp
SRC2 = bear.cpp
SRC3 = cavern.cpp
SRC4 = caveSystem.cpp
SRC5 = crawl.cpp
SRC6 = dark.cpp
SRC7 = Game.cpp
SRC8 = lake.cpp
SRC9 = main.cpp
SRC10 = map.cpp
SRC11 = mud.cpp
SRC12 = stalagmites.cpp
SRC13 = text.cpp
SRC14 = treasure.cpp
SRC15 = menu.cpp
SRCS1 = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} 
SRCS2 = ${SRC9} ${SRC10} ${SRC11} ${SRC12} ${SRC13} ${SRC14} ${SRC15}
SRCS = ${SRCS1} ${SRCS2}

#Headers
HEADER1 = backpack.h
HEADER2 = bear.h
HEADER3 = cavern.h
HEADER4 = caveSystem.h
HEADER5 = crawl.h
HEADER6 = dark.h
HEADER7 = lake.h
HEADER8 = main.h
HEADER9 = map.h
HEADER10 = mud.h
HEADER11 = stalagmites.h
HEADER12 = text.h
HEADER13 = treasure.h
HEADER14 = menu.h
HEADERS1 = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5}
HEADERS2 = ${HEADER6} ${HEADER7} ${HEADER8} ${HEADER9} ${HEADER10}
HEADERS3 = ${HEADER11} ${HEADER12} ${HEADER13} ${HEADER14}
HEADERS = ${HEADERS1} ${HEADERS2} ${HEADERS3}


#Executable names
PROG = CaveGame

#Test Procedures
DOC = FinalDesign.pdf

#Compressed file
ZIP = cs162_final_wicklant.zip

#####################
### BUILD SECTION ###
#####################

#Create program
CaveGame:	${HEADERS} ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o CaveGame

#clean up folder
clean:
	rm -f ${PROG} *.o *~

