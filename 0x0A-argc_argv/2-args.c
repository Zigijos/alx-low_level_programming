#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
