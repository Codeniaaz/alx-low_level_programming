#include <stdio.h>

/**
 *main - entry point
 *@argv: a string
 *@argc: count
 *Return: 0(success)
 *
 */

int main(int argc, char *argv[])
{

	if (argv != NULL && argv[0] != NULL)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
