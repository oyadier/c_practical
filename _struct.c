#include "getopt.h"

/**
 * _ehuman - print the details of a human
 * f: the person parameter
 * Return nothing
 */

void _ehuman(persons *p)
{

	printf("This is the details of our employees:\n Employee's Name: %s\n Gender: %s\n", p->name, p->gender);
}
