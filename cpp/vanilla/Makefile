.DEFAULT_GOAL := all

PROG_NAME = template

CC_FLAGS = -g -Wall -std=c++11
CC_FILES = src/main.cpp
CC = g++

PKG_CONFIG_LIBS =
MANUAL_LIBS =
LIBS = $(MANUAL_LIBS) $(shell pkg-config --libs $(PKG_CONFIG_LIBS))

PKG_CONFIG_INCLUDE =
MANUAL_INCLUDE =
INCLUDE = $(MANUAL_INCLUDE) $(shell pkg-config --cflags $(PKG_CONFIG_INCLUDE))

all : build

build : $(CC_FILES)
	$(CC) -o $(PROG_NAME) $(CC_FILES) $(CC_FLAGS) $(INCLUDE) $(LIBS)

clean :
	$(RM) *.o
	$(RM) core
	$(RM) *~
	$(RM) $(PROG_NAME)
