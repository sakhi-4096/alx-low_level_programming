#include "main.h"

/**
 * _strcpy - copy string including null character
 * @dest: destination of copy
 * @src: source of copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}


/**
 * char *_strcpy(char *dest, char *src)
 * {
 *	while (*src)
 *	{
 *		*dest = *src;
 *		src++;
 *		dest++;
 *	}
 *	return (dest);
 *}
 */
