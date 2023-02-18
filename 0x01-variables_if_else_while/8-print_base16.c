#include <stdio.h>

/**
 *main - Entry Point
 *Return: Always 0 (Success)
 */

int main(void)
{
	/* declarations */
	int num = '0';
	char alpha = 'a';

	/* statements */
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
