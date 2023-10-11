#include <stdio.h>
#include <stdlib.h>

void printOpCodes(void);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	printOpCodes();
	return (0);
}

/**
 * printOpCodes - prints the opcodes of its own main function.
 */
void printOpCodes(void)
{
	int i;

	unsigned char *functionPtr = (unsigned char *)printOpCodes;

	for (i = 0; i < 10; i++)
	{
		printf("%02x ", functionPtr[i]);
	}
	printf("\n");
}
