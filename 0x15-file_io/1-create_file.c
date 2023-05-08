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

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600); /* create file with permisions */
	if (o == -1)
		return (-1);

	if (text_content == NULL) /* nothing to write, return created file */
	{
		close(o);
		return (1);
	}
	str_len = _strlen(text_content); /* get length of chars to write */

	w = write(o, text_content, str_len);
	if (w == -1 || w != str_len) /* failure to write, return */
	{
		close(o);
		return (-1);
	}

	close(o); /* close file */
	return (1);
}
