#include "main.h"
#define ALLOC(s) (malloc(sizeof(char) * s))

/**
 * read_textfile - read a text file and print it to POSIX standard output
 * @filename: pointer to sequence of data
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY); /* file descriptor */
	if (o == -1)
		return (0);

	buffer = ALLOC(letters); /* allocate memory for buffer */
	if (buffer == NULL)
		return (0);

	r = read(o, buffer, letters); /* read */
	w = write(STDOUT_FILENO, buffer, r); /* write */
	if (r == -1 || w == -1 || w != r) /* if fail clear buffer and close file */
	{
		free(buffer);
		close(o);
		return (o);
	}

	/* done, clear buffer and close file */
	free(buffer);
	close(o);
	return (w);
}
