CC=g++

all: test.x

linkedlist.o: ../imports.h linkedlist.h linkedlist.cpp
	${CC} -c linkedlist.cpp

test.x: ../imports.h linkedlist.o test.cpp
	${CC} test.cpp linkedlist.o -o test.x

clean:
	rm *.x *.o