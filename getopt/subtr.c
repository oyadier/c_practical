#include "getopt.h"

void sub(char *argv[])
{
	 int remain = 0;
	short int index = 2;
	while(argv[index] != NULL)
	{
		remain =  atoi(argv[2]) - atoi(argv[3]);
		index++;
	}
	printf("Substraction reuslt is %i\n",remain);

}
