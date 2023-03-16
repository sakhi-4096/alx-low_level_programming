#include "main.h"
#include <stdlib.h>

/**
 * word_count - count words in string
 * @s: input string
 * Return: number of words
 */

int word_count(char *s)
{
	int i = 0, flag = 0, count = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * strtow - split a string into words
 * @str: input string
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	int i, j = 0, len = 0, words, c = 0, start, end;
	char **matrix, *tmp;

	while (*(str + len) != '\0')
		len++;

	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[j] = NULL;

	return (matrix);
}
