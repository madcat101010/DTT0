all: DTT0

DTT0: DTT0.o
	g++ -o DTT0 DTT0.o

DTT0.o: DTT0.cpp board.h gamemodeA.h gamemodeB.h gamemodeC.h options.h
	g++ -c DTT0.cpp board.h gamemodeA.h gamemodeB.h gamemodeC.h options.h

clean:
	rm -rf *.o DTT0
