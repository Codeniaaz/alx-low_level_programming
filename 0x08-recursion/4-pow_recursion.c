#include "main.h"

/**
 *_pow_recursion - function that returns the value of x raised to the power ofy
 *@x: number
 *@y: power
 *return: always success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
