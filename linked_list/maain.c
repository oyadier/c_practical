#include "header.h"

int  main()
{
	Player *p = create_player();
    if (p != NULL) {
        printf("Player name: %s", p->name);
        free(p->name);
        free(p);
    }
    return 0;
}
