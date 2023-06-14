#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins for making
 * change for the amount of money given
 * @argc: the number of arguments in the program
 * @argv: array of arguments passed
 * Return: 0 for success and, return 1  for error
 */

int main(int argc, char *argv[])

{
	int num, q, result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");

		return (1);
	}

	num = atoi(argv[1]);

	result = 0;

	if (num < 0)

	{
		printf("0\n");

		return (0);
	}

	for (q = 0; q < 5 && num >= 0; q++)

	{

		while (num >= coins[q])

		{

			result++;

			num -= coins[q];

		}

	}

	printf("%d\n", result);

	return (0);

}
