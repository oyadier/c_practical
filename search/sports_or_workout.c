#include "header.h"

int sports_or_workout(char *s)
{
	return (strstr(s,"sports") || strstr(s, "workout"));
}
