#include "header.h"
Player *create_player()
{
	Player *pl;
	char name[50];
	unsigned int marks =0;
	pl = malloc(sizeof(Player));
	if (pl == NULL)
	{
		printf("malloc for Player failed");
		return NULL;
	}
	pl->name = malloc(sizeof(strlen(name)+ 1));
	if (pl->name == NULL)
	{
		printf("malloc for name fialed");
		free(pl);
		return NULL;
	};
	printf("Enter the player's name");
	fgets(name, sizeof(name), stdin);

	strcpy(pl->name,name);
	pl->marks = marks;
	pl->next = NULL;

	return pl;
}

