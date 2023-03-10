#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	printf("\n");
	return (0);
}
