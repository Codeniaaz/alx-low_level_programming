#include "main.h"

/**
 *_strncat -  function that concatenates two strings.
 *@dest: a destination string
 *@src: a source string
 *@n: an integer
 *
 *Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[j] = src[k];
		j++;
		k++;
	}

	dest[j] = '\0';
	return (0);
}
