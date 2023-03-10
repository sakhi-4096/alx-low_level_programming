#include "main.h"

/**
 * _str_len - return length of string
 * @s: string to check
 * Return: length of string
 */

int _str_len(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _str_len(s));
}

/**
 * is_pal_rec - check begininng and end of string
 * @start: begining of string
 * @end: end of string
 * Return: 1 if palindrome, 0 if not
 */

int is_pal_rec(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start == *end)
		return (is_pal_rec(start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - check if input string is palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _str_len(s);

	return (is_pal_rec(s, (s + len - 1)));
}
