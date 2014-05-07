#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
//#include <board.h>


using std::string;
using std::atoi;

/* random number generator selects one as 1
 * supress user io on screen and avoide enter usage
 * use clock
 * array stores single 1 and rest 0
 * keys 1 - 4 for each row
 * keep a score
 * end game
 */

int main(int argc, char* args[])
{
	time_t currentTime = time(0);
	tm* currentTimePt = localtime(&currentTime); //get current time structure
	int i = 1;
/*	while( i < argc)
	{
		std::cout << args[i] <<std::endl;
		i++;
	}
*/	int lim = atoi(args[1]); 
	while(i < lim)
	{
		currentTime = time(0);
		currentTimePt = localtime(&currentTime);
		printf("Test: %d \r", currentTimePt -> tm_sec);
		i++;
	}	
	printf("\n");
	currentTimePt -> tm_hour;
	//dt -> tm_min;
	//dt -> tm_sec;
	
	return 0;
}


int randNum(){
	//srand(time());
	return (rand() % 4);
}




