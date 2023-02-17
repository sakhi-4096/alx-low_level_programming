#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *Return: 0 (Success)
 */

int main(void)
{
	/* declarations */
	char alphabet = 'a';

	/* statements*/
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');

	return (0);
}
