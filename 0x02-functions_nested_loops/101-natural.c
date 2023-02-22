#include <stdio.h>

/**
 * main - print sum of 3 and 5 multiples below 1024
 * Return: 0
 */

int main(void)
{
	int n;
	unsigned long int sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%lu\n", sum);

	return (0);
}
