#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: the number of arguements being passed
 *@...:any number of parameters
 *Return: always success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	unsigned int x;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}

