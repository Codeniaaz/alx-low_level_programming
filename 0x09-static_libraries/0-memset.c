#include "main.h"

/**
 *_memset - functions that fills memory with a constant byte.
 *@s: pointer to the memory area
 *@b:  the constant byte
 *@n: the number of bytes
 *Return: 0 always success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
