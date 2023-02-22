#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	/* declarations */
	long int i, term1, term2, next;

	term1 = 1;
	term2 = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (term1 != 20365011074)
		{
			printf("%li, ", term1);
		}
		else
		{
			printf("%li\n", term1);
		}

		next = term1 + term2;
		term1 = term2;
		term2 = next;
	}

	return (0);
}
