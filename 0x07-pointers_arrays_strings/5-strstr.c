#include "main.h"
#define NULL 0
/**
 * _strstr - locate and return pointer to a substring
 * @haystack: string to search
 * @needle: target substring
 * Return: pointer to index of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	if (haystack == NULL || needle == NULL)
		return (NULL);


	if (*(needle) == '\0')
		return (haystack);

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle))
		{
			k = i, j = 0;
			while (*(needle + j) != '\0')
			{
				if (*(haystack + k) == *(needle + j))
				{
					k++;
					j++;
				}
				else
					break;
				if (*(needle + j) == '\0')
					return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
