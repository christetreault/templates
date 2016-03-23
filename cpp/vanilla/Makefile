.DEFAULT_GOAL := all

PROG_NAME = template
SRC_DIR = src

CC_FLAGS = -g -Wall -std=c++11
OBJ_FILES = main.o
CC = g++

PKG_CONFIG_LIBS =
MANUAL_LIBS =
LIBS = # $(MANUAL_LIBS) $(shell pkg-config --libs $(PKG_CONFIG_LIBS))

PKG_CONFIG_INCLUDE =
MANUAL_INCLUDE =
INCLUDE = # $(MANUAL_INCLUDE) $(shell pkg-config --cflags $(PKG_CONFIG_INCLUDE))

all : build

build : $(OBJ_FILES)
	$(CC) -o $(PROG_NAME) $(OBJ_FILES) $(CC_FLAGS) $(INCLUDE) $(LIBS)

main.o : $(SRC_DIR)/main.cpp
	$(CC) -c $(SRC_DIR)/main.cpp $(CC_FLAGS) $(INCLUDE) $(LIBS)

clean :
	$(RM) *.o
	$(RM) core
	$(RM) *~
	$(RM) $(PROG_NAME)
