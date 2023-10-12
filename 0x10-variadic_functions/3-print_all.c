#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_all -  function that prints anything.
 *@format:  list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;
	int print;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		print = 1;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(args, double));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", sep);
				printf("%s%s", sep, str);
				break;
			}
			default:
				print = 0;
		}

		if (print)
			sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
