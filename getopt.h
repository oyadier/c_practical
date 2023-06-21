#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct address
{
        const char *pobox;
        const char *hometown;
        char *street;
};
typedef struct person
{
        const char *name;
       const char *gender;
        short int age;
	struct address addrs;
}persons;


void addition(char *argv[]);
void sub(char *argv[]);
void _ehuman(persons *p);
persons *_person();
