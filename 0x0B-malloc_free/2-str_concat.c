#include "main.h"
#include <stdlib.h>

/**
 *str_concat -  function that concatenates two strings.
 *@s1: string
 *@s2: string
 *Return: always success
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	new_string = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_s1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < length_s2; j++)
	{
		new_string[i + j] = s2[j];
	}

	new_string[i + j] = '\0';
	return (new_string);
}
