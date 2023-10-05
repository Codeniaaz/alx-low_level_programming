#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked -  function that allocates memory using malloc.
 *@b: an integer that has the specific memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	else
	{
		return (ptr);
	}
}
