#include "getopt.h"
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
int main(int in, char *argv[])
{
	int option;

	while ((option = getopt(in, argv, "a:b:p")) != -1)
	{
		switch(option)
		{
			case 'a':
				addition(argv);
				break;

			case 'b':
				sub(argv);
				break;

			case 'p':
				/*persons *p = malloc(sizeof(persons));
				      p = _person();*/
				_ehuman(_person());
				break;

			default:
			fprintf(stderr,"Your option does not exit %c\n", optopt);
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}
