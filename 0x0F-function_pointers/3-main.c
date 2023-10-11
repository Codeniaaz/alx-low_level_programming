#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int result = 0, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if ((get_op_func(operator) == NULL)
			|| (operator[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}
