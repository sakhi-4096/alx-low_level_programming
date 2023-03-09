#include "main.h"

/**
 * root_search - search for root of n, start with 0
 * @n: input number
 * @rt: root to be checked
 * Return: natural square root
 */

int root_search(int n, int rt)
{
	if (rt * rt > n)
		return (-1);
	else if (rt * rt == n)
		return (rt);

	return (root_search(n, rt + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: given number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_search(n, 0));
}
