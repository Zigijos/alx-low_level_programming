#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * strtow - returns a pointer to an array
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 *
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */

char **strtow(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;

		index++;
	}
	return (len);
}

