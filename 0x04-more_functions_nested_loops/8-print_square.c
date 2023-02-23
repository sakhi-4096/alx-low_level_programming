#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
