#include "main.h"

/**
 *reverse_array -  function that reverses the content of an array of integers.
 *@a: an integer
 *Return: always success
 *@n: an integer
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
