#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: character used from second string
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len = 0;
	char *s_concat;

	/* handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get length of s2 */
	while (*(s2 + len) != '\0')
		len++;
	len++, len += n; /* +1 handle NULL pointer */

	s_concat = malloc(sizeof(*s_concat) * len);
	if (s_concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s_concat + i) = *(s1 + i);
	for (j = 0; j <= n; j++)
		*(s_concat + (i + j)) = *(s2 + j);
	*(s_concat + (i + j)) = '\0';

	return (s_concat);
}
