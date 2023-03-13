#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a duplicate string given as parameter
 * @str: string given as parameter
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	size_t i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = (char *) malloc(sizeof(*str));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i) != '\0')
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	return (new_str);
}
