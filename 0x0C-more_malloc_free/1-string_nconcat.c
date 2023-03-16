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
	size_t i = 0, j = 0, len1 = 0, len2 = 0;
	char *s_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of strings */
	while (s1 && *(s1 + len1))
		len1++;
	while (s2 && *(s2 + len2))
		len2++;

	/* allocate memory for string */
	if (n < len2)
		s_concat = malloc(sizeof(*s_concat) * (len1 + n + 1));
	else
		s_concat = malloc(sizeof(*s_concat) * (len1 + len2 + 1));
	if (s_concat == NULL) /* check validity of memory block */
		return (NULL);
	
	/*while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';*/

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s_concat + i) = *(s1 + i);
	for (j = 0; j <= n; j++)
		*(s_concat + (i + j)) = *(s2 + j);
	*(s_concat + (i + j)) = '\0';

	return (s_concat);

}
