#include <stdio.h>

/**
 *main - Entry Point
 *Return: Always 0 (Success)
 */

int main(void)
{
	/* declarations */
	char alphabet = 'z';

	/* statements */
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
