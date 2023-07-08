#include "header.h"

int NUM_ADS = 7;
char *ADS[] = {
 "William: SBM GSOH likes sports, TV, dining",
 "Matt: SWM NS likes art, movies, theater",
 "Luis: SLM ND likes books, theater, art",
 "Mike: DWM DS likes trucks, sports and bieber",
 "Peter: SAM likes chess, working out and art",
 "Josh: SJM likes sports, movies and theater",
 "Jed: DBM likes theater, books and dining"
};

void find(int(*str_find)(char *))
{
	int NUM_ADS = 7;
	int i;
	puts("Search results:");
	puts("__________________________");
	for (i = 0; i < NUM_ADS; i++)
	{
		if (str_find(ADS[i]))
		{
			printf("%s\n", ADS[i]);
		}
	}
	puts("__________________________");
}
