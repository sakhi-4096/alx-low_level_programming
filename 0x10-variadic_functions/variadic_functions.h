#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print varying amount of numbers
 * @separator: delimeter
 * @n: amount of arguments in list
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...);

#endif
