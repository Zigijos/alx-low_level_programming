#include <stdio.h>

/**
 * _puts_recursion - is a function that prints a string
 * @s: the character for the string
 */

void _puts_recursion(char *s)

{
	while (*s)
		putchar(*s++);
	putchar('\n');
}

/**
 * main - checks the code
 * Return: 0
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
