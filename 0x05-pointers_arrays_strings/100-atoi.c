#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	/* check sign of input */
	while (!(*(s + i) <= '9' && *(s + i) >= '0') && *(s + i) != '\0')
	{
		if (*(s + i) == '-')
			sign *= -1;
		i++;
	}
	/* check numbers from input */
	while ((*(s + i) >= '0' && *(s + i) <= '9') && *(s + i) != '\0')
	{
		res = (res * 10) + (*(s + i) - '0');
		i++;
	}
	res *= sign;

	return (res);
}
