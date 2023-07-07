#include "getopt.h"
/**
 * addition - add two numbers
 * argv: the array of car pointers
 */
void addition(char *argv[])
{
        int addent = 2;
        int sum = 0;
        while (argv[addent] != NULL)
        {
                sum += atoi(argv[addent]);
                addent++;
        }
        printf("The result is %d\n",sum);
}
