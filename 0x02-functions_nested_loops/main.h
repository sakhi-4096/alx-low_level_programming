#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *_puchar - print character c to standard output
 *@c: the character to print
 *Return: 1 On Success
 *On error, -1 is returned, error is set appropriately
 */

int _putchar(char c);

/**
 *print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 *print_alphabet_x10 - print lowercase aphabet 10 times
 */

void print_alphabet_x10(void);

/**
 *_islower - check for lowercase character
 *@c: character to check
 *Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c);

/**
 *_isalpha - check alphabetic character
 *@c: character to check
 *Return: 1 if lower or uppercase, 0 otherwise
 */

int _isalpha(int c);

/**
 *print_sign - print the sign of a number
 *@n: number to be checked
 *Return: 1 and + if n greater than zero,
 * O and 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n);

/**
 *_abs - compute absolute value of integer
 *@n: number to be checked
 *Return: integer
 */

int _abs(int n);

/**
 *print_last_digit - print last digit of number n
 *@n: number to be checked
 *Return: value of last digit
 */

int print_last_digit(int n);

/**
 *jack_bauer - print 00:00 to 23:59
 */

void jack_bauer(void);

/**
 *times_table - print 9 times table start with 0
 */

void times_table(void);

/**
 *add - add two integers and return result
 *@a: first integer
 *@b: second integer
 *Return: int
 */

int add(int a, int b);

/**
 *print_to_98 - print natural number from n to 98
 *@n: any natural number
 */

void print_to_98(int n);

/**
 *print_times_table - print the n times table, start with zero
 *@n: n is greater than 15 or less than 0 should not print
 */

void print_times_table(int n);

#endif
