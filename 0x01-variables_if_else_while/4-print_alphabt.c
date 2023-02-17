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
		if (alphabet == 'q')
		{
			alphabet++;
			continue;
		}
		else if (alphabet == 'e')
		{
			alphabet++;
			continue;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	} while (alphabet <= 'z');
	putchar('\n');

	return (0);
}
