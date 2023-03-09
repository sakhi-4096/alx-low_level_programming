#include "main.h"

/**
 * prime_no - check if prime
 * @num: number being checked
 * @z: divisor
 * Return: 1 if prime, 0 otherwise
 */

int prime_no(int num, int z)
{
	if (z == 1)
		return (1);
	if (num % z == 0 && z > 0)
		return (0);
	return (prime_no(num, z - 1));
}

/**
 * is_prime_number - return 1 if input integer is prime number
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_no(n, n - 1));
}
