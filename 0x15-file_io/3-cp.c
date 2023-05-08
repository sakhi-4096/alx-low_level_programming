#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - entry point, copy one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* Declare file descriptors for source and target files */
	int source_fd, target_fd;
	/* Store number of bytes read and written */
	ssize_t num_read, num_written;
	/* Buffer to read from and write to */
	char buffer[BUFFER_SIZE];

	/* Check if number of arguments is correct */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source_file target_file\n", argv[0]);
		exit(97);
	}

	/* Open source file for reading */
	if ((source_fd = open(argv[1], O_RDONLY)) == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open target file for writing, craete if necessary, and truncate if zero length */
	if ((target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}

	/* Read from source file into buffer untill nothing left */
	while ((num_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		/* Write from the buffer to the target file */
		if ((num_written = write(target_fd, buffer, num_read)) == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(target_fd);
			exit(99);
		}
	}

	/* Check if reading from the source file */
	if (num_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(target_fd);
		exit(98);
	}

	/* Close source file and check if closing failed */
	if (close(source_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	/* Close target file and check if closing failed */
	if (close(target_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", target_fd);
		exit(100);
	}

	return (EXIT_SUCCESS); /* Exit program with success status */
}
