#include "main.h"

/**
 * _strspn - get length of a string prefix substring
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (count);
		}
	}
	return (count);
}

/*
*unsigned int _strspn(char *s, char *accept)
*{
*	int n;
*	const char *p;
*
*	for (n = 0; *s; s++, n++)
*	{
*		for (p = accept; *p && *p != *s; p++)
*			;
*		if (!*p)
*			break;
*	}
*	return (n);
*}
*/
