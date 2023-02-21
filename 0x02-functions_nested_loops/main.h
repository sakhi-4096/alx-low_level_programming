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

#endif
