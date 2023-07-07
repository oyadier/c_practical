#include "header.h"

unsigned int n_random()
{
	int min = 1;
	int max = 3;
	unsigned int output;

	srand(time(0));
	output = (rand() % (max -min +1)+ min) - 1;
	printf("Compt: %u\n",output); 
	return output;
}
