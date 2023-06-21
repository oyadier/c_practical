#include "getopt.h"

persons *_person()
{
	 persons *p ;
	 p = malloc(sizeof(persons));
	 if(p == NULL)
	 {
		 return NULL;
	 }
	p->name = malloc(sizeof(char) * 20);
       p->gender = malloc(sizeof(char) * 10);
        puts("Enter name and gender ONLY");
        scanf("%s %s",p->name,p->gender);

	return p;
}

/*persons *_person()
{
          persons *p ;
         p = malloc(sizeof(persons));
         if(p == NULL)
         {
                 return NULL;
         }
     p->name = malloc(sizeof(char) * 20);
       p->gender = malloc(sizeof(char) * 10);
        puts("Enter name and gender ONLY");
        scanf("%s %s",p->name,p->gender);
        return p;
}*/
