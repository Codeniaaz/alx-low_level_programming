#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: a string
 *@s2: a string
 *@n: an integer
 *Return: always success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int len_1 = 0, len_2 = 0, i, j;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	while (s1[len_1] != '\0')
	{
		len_1++;
	}
	while (s2[len_2] != '\0')
	{
		len_2++;
	}

	combined = malloc((len_1 + n + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		combined[i] = s1[i];
	if (n >= len_2)
	{
		for (j = 0; j < len_2; j++)
		{
			combined[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			combined[i + j] = s2[j];
		}
	}

	combined[i + j] = '\0';
	return (combined);
}
