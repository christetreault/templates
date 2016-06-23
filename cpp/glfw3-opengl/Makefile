.DEFAULT_GOAL := all

PROG_NAME = PLACEHOLDER
SRC_DIR = src
RES_DIR = res

CC_FLAGS = -g -Wall -Wconversion -std=c++14 -Ofast
OBJ_FILES = main.o
CC = g++

PKG_CONFIG_LIBS = gl glu glew glfw3
MANUAL_LIBS =
LIBS = $(MANUAL_LIBS) $(shell pkg-config --libs $(PKG_CONFIG_LIBS))

PKG_CONFIG_INCLUDE = gl glu glew glfw3
MANUAL_INCLUDE =
INCLUDE = $(MANUAL_INCLUDE) $(shell pkg-config --cflags $(PKG_CONFIG_INCLUDE))

# ----------------------------------------------------------
# --- Targets ----------------------------------------------
# ----------------------------------------------------------

all : build

build : $(OBJ_FILES)
	$(CC) -o $(PROG_NAME) $(OBJ_FILES) $(CC_FLAGS) $(INCLUDE) $(LIBS)

main.o : $(SRC_DIR)/main.cpp
	$(call compile,main.cpp)

clean :
	$(RM) *.o
	$(RM) core
	$(RM) *~
	$(RM) $(PROG_NAME)
	$(RM) $(SRC_DIR)/*~
	$(RM) $(RES_DIR)/*~

# ----------------------------------------------------------
# --- Functions --------------------------------------------
# ----------------------------------------------------------

compile = $(CC) -c $(SRC_DIR)/$(1) $(CC_FLAGS) $(INCLUDE) $(LIBS)
