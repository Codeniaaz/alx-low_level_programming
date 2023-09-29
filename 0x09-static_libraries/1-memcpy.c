#include "main.h"

/**
 *_memcpy -  function that copies memory area
 *@dest: a destination area
 *@src: a source area
 *@n: the size of the memory to print
 *Return: always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
