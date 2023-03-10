#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int z, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	z =  atoi(argv[1]);

	if (z < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	coins += z / 25;
	z = z % 25;
	coins += z / 10;
	z = z % 10;
	coins += z / 5;
	z = z % 5;
	coins += z / 2;
	z = z % 2;
	coins += z / 1;
	printf("%d\n", coins);

	return  (0);
}
