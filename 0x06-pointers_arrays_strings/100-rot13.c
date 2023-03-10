#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;

	/* alphabets and rot13 arrays */
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++) /* loop through string */
	{
		j = 0;
		while (alpha[j] != '\0' && s[i] != alpha[j])
			j++;
		if (s[i] == alpha[j])
			s[i] = rot[j];
	}

	return (s);
}
