#include <err.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include "board.h"

class gamemodeB
{
private:
	int score;
public:
	gamemodeB();
	void runGame(int & state, board b, int userinput, int time);
	int getScore();

};

gamemodeB::gamemodeB()
{

}

int gamemodeB::getScore()
{
return score;
}

void gamemodeB::runGame(int & state, board b, int userinput,int time)
{
	if (state==1)//playgame
	{
                if (b.istheoneat(userinput))
                {
                        score++;
                        state=2;
                }
                else if (!b.istheoneat(userinput)||time>10)
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
                std::cout<<"YOUR SCORE IS IN 10 SECONDS: "<<score<<std::endl;
                exit(EXIT_SUCCESS);
        }
        else
        {
                std::cout<<"SOMETHING IS WRONG"<<std::endl;
                exit(EXIT_FAILURE);

        }


}
