#include "main.h"

/**
 *jack_bauer - print 00:00 to 23:59
 */

void jack_bauer(void)
{
	/* declarations */
	int hours = 0;
	int minutes = 0;

	/* statements */
	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
			_putchar('\n');
			minutes++;
		}
		minutes = 0;
		hours++;
	}
}
