#include "header.h"

unsigned int choice()
{
	unsigned int opt;
	printf("Select your option\n_________________\n 1. Scissorss\n 2. Paper\n 3. Stone\n");
	scanf("%d",&opt);

	while (opt < 1 || opt > 3)
	{
		printf("Your input is wrong\n");
		printf("Select your option\n_________________\n 1. Scissorss\n 2. Paper\n 3. Stone\n");
        	scanf("%d",&opt);
	}
	opt--;
	return (opt);
}
