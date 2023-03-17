#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of blocks
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: character used from second string
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - create an array of integers with a range
 * @min: miinimum integer
 * @max: maximum integer
 * Return: pointer to new array
 */

int *array_range(int min, int max);

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size, in bytes allocated space for ptr
 * @new_size: size, in bytes of new memory block
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
