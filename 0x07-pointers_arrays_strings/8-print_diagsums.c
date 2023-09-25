#include <stdio.h>

/**
 * print_diagsums - prints  sum of two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: number of rows or columns
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
	}

		printf("%d, %d\n", sum_1, sum_2);
}
