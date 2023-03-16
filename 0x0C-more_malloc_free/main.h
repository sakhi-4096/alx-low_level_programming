#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of blocks
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: character used from second string
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */
