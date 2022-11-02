#include <stdio.h>

/**
 * _puts_recursion - is a function that prints a string
 * @s: the character for the string
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
