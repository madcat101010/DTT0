#ifndef GAMEMODEA_H
#define GAMEMODEA_h

#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include "board.h"

class gamemodeA
{
private:
	int score;
public:
	gamemodeA();
	void runGame(int & state,board b,int userinput);
	int getScore();
};

gamemodeA::gamemodeA()
{
//blank initilization
score=0;
}

int gamemodeA::getScore()
{
	return score;
}

void gamemodeA::runGame(int & state, board b,int userinput)
{
	if(state== 1)//playgame
	{
		if (b.istheoneat(userinput))
		{
			score++;
			state=2;
		}
		else
		{
			state=3;
		}
	}		
	if(state== 2)//updateboard
	{
		b.updateBoard();	
		state=1;
	}
	else if(state==3)//End game
	{
		std::cout<<"YOUR SCORE IS: "<<score<<std::endl;	
		exit(EXIT_SUCCESS); 
	}
	else 
	{
		std::cout<<"SOMETHING IS WRONG"<<std::endl;
                exit(EXIT_FAILURE);
       	}
}

#endif
