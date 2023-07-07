#include "getopt.h"
/**
 * Linked list of banks in ghana
 */
	
void display(bank *bks)
{
	bank *b = bks;

	for(;b != NULL; b = b->next)
	{
		printf("Bank Name: %s\n Location: %s\n Year:%ls\n Opens: %s\n Close: %s\n\n", b->name,b->location, b->year,b->opens,b->closes);
}
}
