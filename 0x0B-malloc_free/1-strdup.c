#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that return a pointer to a newly allocated space in memory
 *, which contains a copy of the string given as a parameter.
 *@str: atring to be copied
 *Return: always success
 */
char *_strdup(char *str)
{
	unsigned int  i;
	char *duplicate;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
