#ifndef MAIN_H_
#define MAIN_H_

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */

int _putchar(char c);

/**
 * create_array - create array of chars and initializes with specific char
 * @size: size of chars to be created
 * @c: character used to initialize the array
 * Return: pointer to the array of char, or NULL
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - return pointer to a duplicate string given as parameter
 * @str: string given as parameter
 * Return: pointer to copy of string
 */

char *_strdup(char *str);

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated concatenated string
 */

char *str_concat(char *s1, char *s2);

#endif /* MAIN_H */
