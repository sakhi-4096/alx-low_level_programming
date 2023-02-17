#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */

int main(void)
{
	/* declarations */
	char lower = 'a';
	char upper = 'A';

	/* statements*/
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
