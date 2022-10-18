#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: always return 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
