#include "header.h"

unsigned int n_random()
{
	int min = 1;
	int max = 3;
	srand(time(0));
	return  (rand() % (max -min +1)+ min) - 1; ;
}
