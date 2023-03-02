#include "main.h"

/**
 * _strcmp - comapre two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 for identical, 1 for otherwise
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == #s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		return ((*s1) - (*s2));
	else
		return (0);
}
