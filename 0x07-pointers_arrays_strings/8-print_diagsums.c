#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: 2D array or matrix
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, row;
	int diag_sum_1 = 0, diag_sum_2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diag_sum_2 += a[i];
	}

	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
