#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: success zero, failure one
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)

			mul = mul * atoi(argv[i]);

		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
