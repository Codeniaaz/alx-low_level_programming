#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *print_numbers -  function that prints numbers, followed by a new line.
 *@separator: it separates the numbers
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, s;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d", s);
		}
		else
		{
			printf("%d%s", s, separator);
		}
	}
	va_end(args);
	printf("\n");
}
