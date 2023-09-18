#include"main.h"

/**
 * swap_int - function that swaps
 * @a: an integer
 * @b: an integr
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
