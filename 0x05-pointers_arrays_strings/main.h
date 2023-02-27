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

/**
 * print_rev - print string in reverse, then new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s);

/**
 * puts2 - print every other character
 * @str: input string
 * Return: void
 */

void puts2(char *str);

/**
 * puts_half - print half string then new line
 * @str: input string
 * Return: void
 */

void puts_half(char *str);

/**
 * print_array - print n elements of array of integers
 * @a: array of integers
 * @n: number of elements of array
 * Return: void
 */

void print_array(int *a, int n);

#endif /* MAIN_H */
