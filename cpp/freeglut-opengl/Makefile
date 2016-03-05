.DEFAULT_GOAL := all

PROG_NAME = template

CC_FLAGS = -g -Wall -std=c++11
CC_FILES = src/main.cpp
CC = g++

PKG_CONFIG_LIBS = gl glu glew
MANUAL_LIBS = -lglut
LIBS = $(MANUAL_LIBS) $(shell pkg-config --libs $(PKG_CONFIG_LIBS))

PKG_CONFIG_INCLUDE = gl glu glew
MANUAL_INCLUDE =
INCLUDE = $(MANUAL_INCLUDE) $(shell pkg-config --clfags $(PKG_CONFIG_INCLUDE))

all : build

build : $(CC_FILES)
	$(CC) -o $(PROG_NAME) $(CC_FILES) $(CC_FLAGS) $(INCLUDE) $(LIBS)

clean :
	$(RM) *.o
	$(RM) core
	$(RM) *~
	$(RM) $(PROG_NAME)
