#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * structure (struct)
 */
struct address
{
        const char *pobox;
        const char *hometown;
        char *street;
};
/**
 * typedef keyword usage
 */
typedef struct person
{
        char *name;
        char *gender;
        short int age;
	struct address addrs;
}persons;
/**
 * enum datatype
 */
typedef enum
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY
}days;

/**
 * Bitfield datatype
 */
typedef struct
{
	unsigned int days:5;
	unsigned int month:4;
	unsigned int year;
}date;

typedef struct
{
        days day;
        date d;
}today_date;

typedef struct banks
{
	char *name;
	char *location;
	unsigned int *year;
	char *opens;
        char *closes;
	struct banks *next;
}bank;

void addition(char *argv[]);
void sub(char *argv[]);
void _ehuman(persons *p);
persons *_person();
void use_enum();
void dates();
bank *create(char *name, char *location,unsigned int *year,char *open,char *close);
void display(bank *b);
void add_bank();
void release(bank *start);
