#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>


class board
{
private:
	int size;
	int array[];
public:
	board(int nsize);//contruct board with n number of size
	int getSize();	 //return the size of the board
	int printBoard(int score);//print the board in the ternimal
	void updateBoard();//use rand to put one 1 to the board array
	bool istheoneat(int index);//Description below
};

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

//print the board on the terminal and the input score
int board::printBoard(int score)
{
	for (int k=0;k<size;k++)
	{
		std::cout<<array[k]<<" ";		
	}
	std::cout<<"    Score:"<<score<<std::endl;
}

//use rand to put a 1 to the array
void board::updateBoard()
{

}

//Check if there is 1 at the index, return true if index is at one 
bool board::istheoneat(int index)
{
	if (array[index]==1)
		return true;
	return false;	
}
