#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/**
 * print_name - execute a function given as a parameter
 * @name: parameter that function ptr needs
 * @f: function to execute
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - execute function on an array via function ptr
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 not found or array not found
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
