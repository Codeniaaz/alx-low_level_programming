#include "main.h"

/**
 *cap_string - function that capitalizes all words of a string
 *@ptr: a string
 *Return: always 0
 */
char *cap_string(char *ptr)
{
	int x = 0;

	while (ptr[x])
	{
		while (!(ptr[x] >= 'a' && ptr[x] <= 'z'))
		x++;

			if (ptr[x - 1] == ' '  ||
			ptr[x - 1] == '\t' ||
			ptr[x - 1] == '\n' ||
			ptr[x - 1] == '.' ||
			ptr[x - 1] == ',' ||
			ptr[x - 1] == '!' ||
			ptr[x - 1] == '?' ||
			ptr[x - 1] == '{' ||
			ptr[x - 1] == '}' ||
			ptr[x - 1] == ';' ||
			ptr[x - 1] == '(' ||
			ptr[x - 1] == ')' ||
			ptr[x - 1] == '"' ||
			x == 0)
				ptr[x] -= 32;

			x++;
	}

	return (ptr);
}
