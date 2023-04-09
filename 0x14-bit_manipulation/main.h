#ifndef MAIN_H_
#define MAIN_H_

#include <stddef.h>
#include <stdio.h>

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

/**
 * get_bit - return the value of a bit at a given index
 * @n: number to be checked
 * @index: index value that has to be returned
 * Return: value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to bits
 * @index: index value to be changed
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */
