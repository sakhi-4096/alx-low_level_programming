#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @s: input string
 * Return: capitalized words
 */

char *cap_string(char *s)
{
	int i = 0, j;

	/* character array */
	char spaces[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};

	/* check if first character is capital */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	i++;

	/* if lowercase and before char is seperator, capitalize */
	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && s[i - 1] == spaces[j])
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
