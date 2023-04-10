#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - puts character to standrad output
 * @c: character to put to standard output
 * Return: int
 */
int _putchar(char c);

/**
 * read_textfile - read a text file and print it to POSIX standard output
 * @filename: pointer to sequence of data
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
