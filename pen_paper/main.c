#include "header.h"

int main()
{
	unsigned int rounds;
	printf("Enter number of rounds\n");
	scanf("%u",&rounds);
	while(rounds > 0)
	{
	char *comp =(char *) draw(n_random());
	char *opt = (char *)draw(choice());
	result(comp,opt);
	rounds--;
	}
	return (0);
}
