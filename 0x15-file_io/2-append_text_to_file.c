#include "main.h"

/**
 * _strlen - get string length
 * @s: input string
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * append_text_to_file - append text to at the end of a file
 * @filename: name of the file
 * @text_content: string to be added
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, str_len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND); /* open file */
	if (o == -1)
		return (-1);

	if (text_content == NULL) /* check if text is valid */
	{
		close(o);
		return (-1);
	}
	str_len = _strlen(text_content);

	w = write(o, text_content, str_len); /* write or append text */
	if (w == -1 || w != str_len)
	{
		close(o);
		return (-1);
	}

	close(o); /* close file */
	return (1);
}
