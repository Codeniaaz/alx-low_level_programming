#include "main.h"
#include <stdlib.h>
/**
 *argstostr - function that concatenates all the arguments
 *@ac: argument count
 *@av: argument string
 *Return: always succes
 */
char *argstostr(int ac, char **av)
{
	char *combination;
	int length = 0;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}

	combination = (char *)malloc((length + 1) * sizeof(char));
	if (combination == NULL)
	{
		return (NULL);
	}

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			combination[length++] = av[i][j];
		}
		combination[length++] = '\n';
	}

	combination[length] = '\0';
	return (combination);
}
