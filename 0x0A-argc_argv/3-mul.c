#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)

			mul = mul * atoi(argv[i]);

		printf("%d\n", mul);
	}
	return (0);
}
