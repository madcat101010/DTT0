#ifndef BOARD_H
#define BOARD_H

#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <cstdlib>

class board
{
private:
	int size;
	int* array;
public:
	board(int nsize);//contruct board with n number of size
	int getSize();	 //return the size of the board
	void printBoard(int score);//print the board in the ternimal
	void updateBoard();//use rand to put one 1 to the board array
	bool istheoneat(int index);//Description below
	int randNum();
};

//initialize array with nsize, normally it would be 4
board::board(int nsize)
{
	size=nsize;
	array=new int[10];
}

//neat function to have
int board::getSize()
{
	return size;
}

//print the board on the terminal and the input score
void board::printBoard(int score)
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
	//make array 0's
	for (int i = 0; i<size; i++)
	{
		array[i] = 0;
	}	
	array[randNum()] = 1;
}

//Check if there is 1 at the index, return true if index is at one 
bool board::istheoneat(int index)
{
	if (array[index]==1)
		return true;
	return false;	
}

//creates random number 
int board::randNum()
{
        srand(time(0));
        return ( (rand() % 4));
}

#endif
