#include "main.h"

/**
 *print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	/* declarations */
	char alpha;
	int count;

	/* statements */
	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
