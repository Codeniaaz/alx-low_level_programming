#include <stdio.h>
/**
 *main - entry point
 *@argv: a string
 *@argc: count
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
