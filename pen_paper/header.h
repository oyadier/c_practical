#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
        char *name;
        unsigned int marks;
       struct Player *next;
}Player;


void result(char *com, char *opt);
unsigned int n_random();
unsigned int choice();
char *draw(unsigned int opt);
Player *create_player();


#endif
