#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * _memset - fill memory with a constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: first byted of memory
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy memory area
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate a character in a string
 * @s: string to be checked
 * @c: character we are checking
 * Return: pointer to the character
 */

char *_strchr(char *s, char c);

/**
 * _strspn - get length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string being searched
 * @accept: target matches
 * Return: pointer to index of string
 */

char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */
