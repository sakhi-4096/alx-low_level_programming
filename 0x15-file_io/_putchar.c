#include <unistd.h>

/**
 *_putchar - writes character c to standard output
 *@c: the character to print
 *
 *Return: 1 On Success
 *On error, -1 is returned,and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
