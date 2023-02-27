#include "main.h"

/**
 * print_rev - print string in reverse followed by
 * new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (j = (length - 1); j >= 0; j--)
		_putchar(s[i]);

	_putchar('\n');
}
