#include "header.h"
unsigned int com_marks = 0;
unsigned int human_marks = 0;
void result(char *computer, char *opt)
{

	 if ((strcmp(computer,"Scissors") == 0 && strcmp(opt,"Paper") == 0) || 
		 (strcmp(computer,"Paper")== 0 && strcmp(opt,"Stone") == 0)||
		( strcmp(computer,"Stone")== 0 && (strcmp(opt,"Scissors") == 0)))
	 {
		 com_marks++;
                printf("Computer's choice is %s.\nYour choice  is %s.\nResult: Computer Won!!! Marks is %u\n__________________\n",computer,opt,com_marks);
	 }
	 else if (strcmp(computer,opt)==0)
	 {
		 printf("Computer's choice is %s.\nYour choice  is %s.\nResult: Equalizer!!\n_____________________\n",computer,opt);
	 }
	 else
	 {
		 human_marks++;
		 printf("Computer's choice is %s.\nYour choice  is %s.\nResult: You won!! Marks is %u\n________________________\n",computer,opt,human_marks);
	 }
}
