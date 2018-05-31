CC=g++

all: primtypes.x enums.x rng.x arrays.x strings.x structures.x

primtypes.x: primtypes.cpp
	${CC} primtypes.cpp -o primtypes.x

enums.x: enums.cpp
	${CC} enums.cpp -o enums.x

rng.x: rng.cpp
	${CC} rng.cpp -o rng.x

arrays.x: arrays.cpp
	${CC} arrays.cpp -o arrays.x

strings.x: strings.cpp
	${CC} strings.cpp -o strings.x

pointers.x: pointers.cpp
	${CC} pointers.cpp -o pointers.x

structures.x: structures.cpp
	${CC} structures.cpp -o structures.x

clean:
	rm *.x