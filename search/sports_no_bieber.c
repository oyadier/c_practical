#include "header.h"

int sports_no_bieber(char *s)
{
	return (strstr(s, "sport") && !strstr(s, "bieber"));
}
