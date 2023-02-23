#include "main.h"

/**
 * print_line - print _ character for n times
 * @n: number of times character should be printed
 * Return: void
 */

void print_line(int n)
{
	int i, m = n;

	for (i = 1; i <= m; i++)
	{
		if (m > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
