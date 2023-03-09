#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * _puts_recursion - print a string then new line
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: length of string
 */

int _strlen_recursion(char *s);

/**
 * factorial - return factorial of a given number
 * @n: given number
 * Return: factorial of number
 */

int factorial(int n);

/**
 * _pow_recursion - return value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: given number
 * Return: natural square root
 */

int _sqrt_recursion(int n);

#endif /* MAIN_H */
