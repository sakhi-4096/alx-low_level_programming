#include "main.h"

/**
 *print_last_digit - print last digit of number n
 *@n: number to be checked
 *Return: last digit
 */

int print_last_digit(int n)
{
	/* declarations */
	int m;

	if (n < 0)
	{
		n *= -1;
	}
	m = n % 10;

	if (m < 0)
	{
		m *= -1;
	}

	_putchar('0' + m);

	return (m);
}
