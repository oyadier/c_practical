#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
enum work_type {TAILORING,MASON,TEACHING,DRIVING}

typedef struct
{
	char *name;
	enum work_type type;
}career
