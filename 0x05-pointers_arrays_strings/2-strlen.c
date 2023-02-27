#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
