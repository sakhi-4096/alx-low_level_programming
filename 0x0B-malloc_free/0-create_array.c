#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initializes with specific char
 * @size: size of chars to be created
 * @c: character used to initialize the array
 * Return: pointer to the array of char, or NULL
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ar + i) = c;
	return (ar);
}
