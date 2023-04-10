#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

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

/**
 * create_file - create a file.
 * @filename: name of file to create
 * @text_content: string to be written to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - append text to at the end of a file
 * @filename: name of the file
 * @text_content: string to be added
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
