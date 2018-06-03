CC=g++

all: test.x

test.x: ../imports.h bst.o test.cpp
	${CC} bst.o test.cpp -o test.x

bst.o: ../imports.h bst.h bst.cpp
	${CC} -c bst.cpp

clean:
	rm *.x *.o