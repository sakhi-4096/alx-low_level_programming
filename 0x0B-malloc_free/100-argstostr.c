#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, NULL otherwise
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, len = 0;
	char *cmd_str;

	/* validate input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* get length for cmd_str */
	for (x = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y); y++)
			len++;
		len++;
	}

	/* alocate memory and check if memory is valid */
	cmd_str = malloc((len * sizeof(char)) + 1);
	if (cmd_str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y); y++)
		{
			*(cmd_str + z) = *(*(av + x) + y);
			z++;
		}

		*(cmd_str + z) = '\n';
		z++;
	}
	*(cmd_str + z) = '\0';
	return (cmd_str);
}
