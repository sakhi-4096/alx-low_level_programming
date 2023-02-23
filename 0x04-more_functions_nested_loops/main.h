#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * _isupper - check for uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c);

/**
 * _isdigit - check for a digit 0 to 9
 * @c: input to be checked
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: product of two integers
 */

int mul(int a, int b);

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */

void print_numbers(void);

/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void);

/**
 * more_numbers - print numbers 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void);

/**
 * print_line - draw straight line
 * @n: number of times character should be printed
 * Return: void
 */

void print_line(int n);

/**
 * print_diagonal - print a diagonal n times
 * @n: number of times character \ should be printed
 * Return: void
 */

void print_diagonal(int n);

#endif /* MAIN_H */
