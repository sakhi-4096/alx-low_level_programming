
#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string to be reversed.
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, length;
	char tmp1, tmp2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		tmp1 = s[i];
		tmp2 = s[j];
		s[i] = tmp2;
		s[j] = tmp1;
		i++;
		j--;
	}
}
