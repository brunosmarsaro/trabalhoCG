## TRABALHO DE CG ##

# - VARIABLES

CC = g++
LINLIBS = -lm -lGL -lglut -lGLU
MACLIBS = -framework OpenGL -framework GLUT
CODE = testeOpenGl.cpp
EXE = ./main

# - SCRIPT

OS := $(shell uname)
ifeq ($(OS),Darwin)
    all:
	$(CC) -o main $(CODE) $(MACLIBS) -Wno-deprecated-declarations
	$(EXE)
else
    all:
	$(CC) -o main $(CODE) $(LINLIBS)
	$(EXE)
endif

