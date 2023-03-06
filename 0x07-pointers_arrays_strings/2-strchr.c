#include "main.h"
#define NULL 0
/**
 * _strchr - locate character in string
 * @s: string to be checked
 * @c: characetr to be checked
 * Return: pointer to first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
/*
*char *_strchr(char *s, char c)
*{
*	for (; *s != '\0' && *s != c; ++s)
*		;
*
*	*
*	 * use ternary operator to check for char, return NULL
*	 * if not found
*	 *
*	return (*s == c ? (char *) s : NULL);
*}
*/
