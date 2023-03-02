#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * _strcat - concatenate two strings
 * @dest: string prepend
 * @src: string append
 * Return: pointer to result dest
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate two strings using n bytes from src
 * @n: number n bytes (chars)
 * @src: string to append
 * @dest: string to be appended to
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copy a string
 * @dest: copy to
 * @src: copy from
 * @n: number n bytes (char)
 * Return: string copy
 */

char *_strncpy(char *dest, char *src, int n);

#endif /* MAIN_H */
