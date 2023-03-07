#include "main.h"

/**
 * set_string - set value of a pointer to a char
 * @s: variable of type pointer
 * @to: character
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
