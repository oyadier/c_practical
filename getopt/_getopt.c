#include "getopt.h"
        
int main(int in, char *argv[])
{
	int option;

	while ((option = getopt(in, argv, "a:b:peil")) != -1)
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
				_ehuman(_person());
				break;
			case 'e':
				use_enum();
				break;
			case 'i':
				dates();
				break;
			case 'l':
				add_bank();
				break;
			default:
			fprintf(stderr,"Your option does not exit %c\n", optopt);
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}
