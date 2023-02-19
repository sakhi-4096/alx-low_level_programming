#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicates
 *Return: Always 0 (Success)
 */

int main(void)
{
	/* declarations */
	int i, j;
	/* statements */
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);

				putchar(' ');

				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
