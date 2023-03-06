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

#endif /* MAIN_H */
