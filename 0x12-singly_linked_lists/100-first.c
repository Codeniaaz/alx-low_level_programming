#include "lists.h"

/**
 * my_constructor - prints before main is executed
 */
void my_constructor() __attribute__((constructor));

void my_constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
