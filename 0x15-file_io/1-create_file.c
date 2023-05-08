#include "main.h"

/**
 * _strlen - get lenght of string
 * @s: input string
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

/**
 * create_file - create a file.
 * @filename: name of file to create
 * @text_content: string to be written to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, str_len = 0;

	if (filename == NULL)
		return (-1);

	/* create file with permissions and check if successful */
	o = open(filename, O_CREAT | O_EXCL | O_RDWR, 0600);
	if (o == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(o);
		return (1);
	}
	str_len = _strlen(text_content);

	w = write(o, text_content, str_len); /* write content to file */
	if (w == -1 || w != str_len) /* failure to write, and return */
	{
		close(o);
		return (-1);
	}
	close(o); /* close file */
	return (1);
}
