#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int old;

	old = *a;
	*a = *b;
	*b = old;
}
