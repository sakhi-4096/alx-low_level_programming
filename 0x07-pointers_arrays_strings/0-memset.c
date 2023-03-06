#include "main.h"

/**
 *  _memset - fills memory with a constant byte
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to the momory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}

	return (s);
}

/*
*   char *_memset(char *s, char b, unsigned int n)
*{
*	char *p = s;
*
*	while (n--)
*	{
*		*p++ = b;
*	}
*
*	return (s);
*}
*/
