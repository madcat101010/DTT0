#include <stdio.h>     
#include <stdlib.h>


class board
{
private:
	int size;
	int array[];
public:
	board(int nsize);//contruct board with n number of size
	int getSize();	 //return the size of the board
	int printBoard();//print the board in the ternimal
	void updateBoard();//use rand to put one 1 to the board array
	bool istheoneat(int index);//Description below
}

//initialize array with nsize, normally it would be 4
board::board(int nsize)
{
	size=nsize;
	array[size];
}

//neat function to have
int board::getSize()
{
	return size;
}

//print the board on the terminal 
int board::printBoard()
{
	for (int k=0;k<size;k++)
	{

	}
}

//use rand to put a 1 to the array
void board::updateBoard()
{

}

//Check if there is 1 at the index, return true if index is at one 
bool istheoneat(int index)
{

}
