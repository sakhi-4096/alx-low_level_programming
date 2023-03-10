#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string being searched
 * @accept: target matches
 * Return: pointer to index of string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*s)
	{
		for (j = 0; *accept; accept++, i++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		s++;
		i++;
	}
	return (NULL);
}
