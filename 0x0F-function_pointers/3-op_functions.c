#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - addition
 *@a: integer a
 *@b: integer b
 *Return: always success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - addition
 *@a: integer a
 *@b: integer b
 *Return: always success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - addition
 *@a: integer a
 *@b: integer b
 *Return: always success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - addition
 *@a: integer a
 *@b: integer b
 *Return: always success
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 *op_mod - addition
 *@a: integer a
 *@b: integer b
 *Return: always success
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
