#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicates, 10 or 01
 *Return: Always 0 (Success)
 */

int main(void)
{
	/* declarations */
	int ones;
	int tens;

	/* statements */
	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = (tens + 1); ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if ((tens != '8') || (ones != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
