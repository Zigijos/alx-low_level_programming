#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds positive numbers
  * @argc: argument count
  * @argv: arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)

		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{

				printf("Error\n");

				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
