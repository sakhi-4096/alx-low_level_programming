#include "main.h"

/**
 * _pow_recursion - return value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1 || y == 0)
		return (1);
	else if (x == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
