#include "main.h"

/**
 *_strcat - a function that combines strings
 * @dest: a string
 * @src: another string
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
