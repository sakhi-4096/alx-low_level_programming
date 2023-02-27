#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * reset_to_98 - update value being pointed to
 * @n: pointer int
 * Return: void
 */

void reset_to_98(int *n);

/**
 * swap_int - swap values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * _strlen - return length of a string
 * @s: string being checked
 * Return: length
 */

int _strlen(char *s);

/**
 * _puts - print a string then new line
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str);

#endif /* MAIN_H */
