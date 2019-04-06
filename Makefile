#----------------------------------------------------------------------------------------------------------------------
#
# SETTINGS
#
#----------------------------------------------------------------------------------------------------------------------

CFLAGS=-ansi -pedantic -Wall
CXX_FLAGS=-ansi -pedantic -Wall
CXX:=$(or ${CXX}, clang++)
CC:=$(or ${CC}, clang)
INCLUDE_PATH=.
TARGET=stack_test

all: build

.PHONY: build
build: 
	mkdir build
	${CXX} -I ${INCLUDE_PATH} -o build/${TARGET} main.cpp

.PHONY: clean
clean:
	rm -rf build