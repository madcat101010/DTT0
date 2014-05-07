all: DTT0

DTT0: DTT0.o
	g++ -o DTT0 DTT0.o

DTT0.o: DTT0.cpp board.h
	g++ -c DTT0.cpp

clean:
	rm -rf *.o DTT0
