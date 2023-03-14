#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t i, j, len1, len2;
	char *str_con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0, j = 0, len1 = 0, len2 = 0;
	while (*(s1 + i))
		i++, len1++;
	while (*(s2 + j))
		j++, len2++;

	str_con = malloc((len1 + len2 + 1) * sizeof(char));
	if (str_con == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(str_con + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(str_con + i) = *(s2 + j);
		i++, j++;
	}
	*(str_con + j) = '\0';

	return (str_con);
}
