#include <stdio.h>

/**
 *main - Entry Point
 *Return: Always 0 (Success)
 */

int main(void)
{
	/* declarations*/
	int n;

	/* statements */
	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');
	}
	putchar('\n');

	return (0);
}
