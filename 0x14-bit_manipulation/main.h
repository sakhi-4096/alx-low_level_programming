#ifndef MAIN_H_
#define MAIN_H_

#include <stddef.h>

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - print the binary representation of a number
 * @n: input number
 * Return: void
 */
void print_binary(unsigned long int n);

#endif /* MAIN_H */
