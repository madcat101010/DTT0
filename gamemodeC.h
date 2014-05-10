#ifndef GAMEMODEC_H
#define GAMEMODEC_H


#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include "board.h"


class gamemodeC
{
private:
	int score;
public:
	gamemodeC();
	void runGame(int & state, board b, int userinput, int & currtime,int & starttime);
	int getScore();

}; 

gamemodeC::gamemodeC()
{
score=0;
}

int gamemodeC::getScore()
{
return score;
}

void gamemodeC::runGame(int & state, board b, int userinput, int & currtime, int & starttime)
{
	if (state==1)
	{
	
		if (b.istheoneat(userinput))
		{
			score++;
			state=2;
		}

		if (score%15==0)
			starttime=currtime;
		if (((currtime-starttime)>=10)||!b.istheoneat(userinput))
			state=3;
			
	}
	
	if (state==2)
	{
		b.updateBoard();
		state=1;
	}

	if (state==3)
	{
		std::cout<<"YOUR SCORE IS: "<<score <<std::endl;
		exit(EXIT_SUCCESS);
	}
	
}


#endif
