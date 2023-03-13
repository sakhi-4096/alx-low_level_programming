#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a duplicate string given as parameter
 * @str: string given as parameter
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	size_t i = 0, length = 0;
	char *new_str;

	if (str == NULL) /* check memory */
		return (NULL);

	while (*(str + i))
		length++, i++;
	length++; /* add NULL terminator */

	new_str = malloc(length * sizeof(char));
	if (new_str == NULL) /* check memory */
		return (NULL);

	i = 0;
	while (i < length)
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	return (new_str);
}
