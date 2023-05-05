#include "main.h"

/**
 * _strlen - get stirng length
 * @s: input string
 * Return: length of string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	size_t i, len, uint = 0;

	if (!b)
		return (uint);
	len = (_strlen(b) - 1);

	for (i = 0; *(b + i) != '\0'; i++, len--)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		if (*(b + i) == '1')
			uint += (1 << len);
	}
	return (uint);
}
