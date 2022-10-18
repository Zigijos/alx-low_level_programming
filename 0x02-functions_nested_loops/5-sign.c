#include <stdio.h>
#include "main.h"

/**
 * print_sign - is a function that prints the sign of a number.
 *
 * @n: is the number to be check
 *
 * Return: Returns 1 if n > 0, Returns 0 if n = 0, Returns -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
	}
	putchar('-');
	putchar('1');
}
