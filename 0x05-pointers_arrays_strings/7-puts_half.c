#include "main.h"

/**
 * puts_half - print half string followed by new line
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, length;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	if (length % 2 == 1)
		n = (length - 1) / 2;
	else
		n = length / 2;

	for (i = n + 1; str[i] != '\0' i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
