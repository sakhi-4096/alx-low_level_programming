#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
