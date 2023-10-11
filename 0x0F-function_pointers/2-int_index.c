#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index -  function that searches for an integer.
 *@array: an array
 *@size: size of the array
 *@cmp: a function pointer
 *Return: always success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
