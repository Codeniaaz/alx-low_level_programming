#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: c is used to check  a digit
 * Return: 1 if c is a digit.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
