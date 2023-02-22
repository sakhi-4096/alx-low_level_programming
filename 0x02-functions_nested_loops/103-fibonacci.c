#include <stdio.h>

/**
 * main - print sum of even fibonacci numbers up to 4,000,000
 * Return: 0
 */

int main(void)
{
	/* declarations */
	int sum_evens = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	/* statements */
	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			sum_evens += sum;
		}
	}
	printf("%i\n", sum_evens);

	return (0);
}
