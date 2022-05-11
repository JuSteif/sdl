SRC=src/
INCLUDE=include/
CC=g++
FLAGS=-g -O0
DEBUG=

SDL = -D_REENTRANT -I/usr/include/SDL2 -lSDL2 -lSDL2_ttf

${DEBUG}main: ${DEBUG}main.o
	@echo "compile main"
	${CC} -o ${DEBUG}main ${DEBUG}main.o ${SDL}




${DEBUG}main.o: ${SRC}main.cpp
	@echo "compile mainobject"
	${CC} ${FLAGS} -c ${SRC}main.cpp -I ${INCLUDE} -o ${DEBUG}main.o

clean:
	rm debug/*

.PHONY: clean

#main: main.o
#	g++ main.o -o main -D_REENTRANT -I/usr/include/SDL2 -lSDL2 -lSDL_ttf
#
#main.o: main.cpp
#	g++ -c main.cpp