#include "header.h"

void result(char *computer, char *opt)
{

	 if (((computer == "Scissors")&&(opt == "Paper")) || 
		((computer == "Paper") && (opt == "Stone"))||
		((computer == "Stone") && (opt == "Scissors")))
         {
                printf("Computer's choice is %s.\nYour choice  is %s.\nResult: Computer Won!!!\n__________________",computer,opt);
	 }
	 else if (computer == opt)
	 {
		 printf("Computer's choice is %s.\nYour choice  is %s.\nResult: Equalizer!!\n_____________________",computer,opt);
	 }
	 else
	 {
		 printf("Computer's choice is %s.\nYour choice  is %s.\nResult: You won!!\n________________________\n",computer,opt);
	 }
}
