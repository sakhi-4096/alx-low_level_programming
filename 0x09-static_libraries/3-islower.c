#include "main.h"

/**
 *_islower - check for lowercase character
 *Return: 1 if c is lowercase, 0 otherwise
 *@c: integer parameter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
