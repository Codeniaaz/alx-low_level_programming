#include "main.h"
#include <stdlib.h>

/**
 *create_array -  function that creates an array of chars
 *and initializes it with a specific char.
 *@size: gives the size to be printed
 *@c: a char
 *Return: always success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *r;

	if (size == 0)
	{
		return (NULL);
	}

	r = (char *)malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		r[i] = c;
	}
	return (r);
}
