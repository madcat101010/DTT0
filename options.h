#ifndef OPTIONS_H
#define OPTIONS_H

#include <iostream>
#include <cstdlib>
#include <cstdio>

int option();


int option()
{
        int gamemode = 0;
        char gamemodeinput;
        while(gamemode == 0)
        {
                printf("Chose a gamemode: \n A. Gamemode A \n B. Gamemode B \n Q: Quit \n");
                std::cin >> gamemodeinput;
                std::cin.ignore();
                switch(gamemodeinput)
                {
                        case 'a':
                        case 'A':
                                gamemode = 1;
                                break;
                        case 'b':
                        case 'B':
                                gamemode = 2;
                                break;
                        case 'q':
                        case 'Q':
                                gamemode = -1;
                                break;
                        default:
                                printf("%c is not a valid input.\n", gamemodeinput);
                                break;
                }
        }
	return gamemode;
}



#endif
