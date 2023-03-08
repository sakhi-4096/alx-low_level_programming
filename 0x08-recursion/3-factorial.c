#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: given number
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
