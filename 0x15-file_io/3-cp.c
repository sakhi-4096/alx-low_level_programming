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
	int source_fd, target_fd;
	ssize_t num_read, num_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s source_file target_file\n", argv[0]);
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (target_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		close(target_fd);
		exit(99);
	}

	while (1)
	{
		num_read = read(source_fd, buffer, BUFFER_SIZE);
		if (num_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			break;
		}

		if (num_read == 0)
			break;

		num_written = write(target_fd, buffer, num_read);
		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			break;
		}
	}

	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(target_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", target_fd);
		exit(100);
	}

	return (EXIT_SUCCESS);
}
