#include "getopt.h"

bank *create(char *name, char *location,unsigned int *year,char *open, char *close)
{
	bank *b;
	unsigned int *year = year;
	b = malloc(sizeof(bank));
	year = malloc(sizeof(unsigned int *));
	if(b == NULL)
	{
		return NULL;
	}
	b->name = strdup(name);;
	b->location = strdup(location);
	b->year = year;
	b->opens = strdup(open);
	b->closes = strdup(close);
	b->next = NULL;
	return (b);
}

void release (bank *start)
{
	bank *b = start;
	bank *next = NULL;

	for(; b != NULL; b = next)
	{
		next = b->next;
		free(b->name);
		free(b->location);
		free(b->year);
		free(b->opens);
		free(b->closes);

		free(b);
	}
}
void add_bank()
{
	bank *start = NULL;
	bank *b = NULL;
	bank *next = NULL;
	char name[30];
	char location[30];
	char open[10];
	char close[10];
	unsigned int *yr = 0;

	for (; fgets(name,30,stdin) != NULL; b = next)
	{
		fgets(location,30,stdin);
		scanf("%u",yr);
		fgets(open,10,stdin);
		fgets(close,10,stdin);
		next = create(name,location,yr,open,close);
		if(start == NULL)
		{
			start = next;
		}
		if (b != NULL)
			b->next = next;
	}
	display(start);
	release(start);
}
