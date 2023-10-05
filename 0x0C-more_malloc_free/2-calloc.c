#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: number of elements int pointer array
 *@size: size of bytes
 *Return: always success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

