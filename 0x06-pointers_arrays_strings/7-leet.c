#include "main.h"

/**
 * leet - encode string to leet
 * @s: input string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	char letters[11] = {'a', 'A', 'e', 'E', 'o','O', 't', 'T', 'l', 'L', '\0'};
	char numbers[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(letters + j) != '\0'; j++)
		{
			if (*(s + i) == *(letters + j))
				*(s + i) = *(numbers + j);
		}
	}

	return (s);
}
