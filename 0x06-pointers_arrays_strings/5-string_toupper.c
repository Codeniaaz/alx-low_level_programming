#include "main.h"

/**
 *string_toupper - function that changes all lowercase letters to uppercase
 *@ptr: a pointer
 *Return: always 0
 */

char *string_toupper(char *ptr)
{
	int v;

	for (v = 0; ptr[v] != '\0'; v++)
	{
		if (ptr[v] >= 'a' && ptr[v] <= 'z')
		{
			ptr[v] = ptr[v] - 32;
		}
	}
	return (ptr);
}
