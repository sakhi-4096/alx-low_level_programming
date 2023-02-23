#include <stdio.h>

/**
 * main - print 1 to 100, print Fizz for multiples
 * of three, Buzz for multiples of five, FizzBuzz for
 * multiples of three and five.
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	do {
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%i ", i);

		if (i < 100)
			printf(" ");
		i++;
	} while (i <= 100);
	printf("\n");

	return (0);
}
