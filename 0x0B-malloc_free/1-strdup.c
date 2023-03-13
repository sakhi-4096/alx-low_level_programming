#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get length of string
 * @s: input string
 * Return: length of string in bytes
 */

size_t _strlen(char *s)
{
	size_t i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++, len++)
		;
	return (len);
}

/**
 * _strdup - return pointer to a duplicate string given as parameter
 * @str: string given as parameter
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	size_t i, length;
	char *new_str;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	new_str = (char *) malloc(length);
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < length)
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	return (new_str);
}
