#include "main.h"
#include <stdlib.h>

/**
 *array_range -  function that creates an array of integers.
 *@min: minimum
 *@max: maximum
 *Return: always success
 */
int *array_range(int min, int max)
{
	int *arrayRange;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arrayRange = malloc((max - min + 1) * sizeof(int));
	if (arrayRange == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		arrayRange[i] = min + i;
	}
	return (arrayRange);
}
