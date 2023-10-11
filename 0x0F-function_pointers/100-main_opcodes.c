#include <stdio.h>
#include <stdlib.h>

void printOpCodes(int);

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

	printOpCodes(numBytes);
	return (0);
}

/**
 * printOpCodes - prints the opcodes of its own main function.
 * @numBytes: no of bytes
 */
void printOpCodes(int numBytes)
{
	int i;

	int (*mainFuncPtr)(int, char **) = main;
	unsigned char *functionPtr = (unsigned char *)mainFuncPtr;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02hhx ", functionPtr[i]);
	}
	printf("\n");
}
