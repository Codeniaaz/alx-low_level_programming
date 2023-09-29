#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: an s1 string
 * @s2: an s2 string
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
			return (result);
		}
		i++;
	}
	return (0);
}
