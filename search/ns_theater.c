#include "header.h"

int ns_theater(char *s)
{
	return (strstr(s,"NS") && strstr(s,"Theater"));
}
