#include <stdio.h>

/**
 * main - print largest prime facter of number
 * Return: 0 Success
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long divisor = 2;

	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			number /= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%lu\n", number);

	return (0);
}
