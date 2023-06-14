#include <stdio.h>
#include "main.h"

/**
 * _atoi - to convert our string to an integer
 * @s: string to be converted
 * Return: int converted from string
 */

int _atoi(char *s)

{
	int z, x, c, len, v, digit;

	z = 0;

	x = 0;

	c = 0;

	len = 0;

	v = 0;

	digit = 0;

	while (s[len] != '\0')

		len++;

	while (z < len && v == 0)

	{

		if (s[z] == '-')

			++x;

		if (s[z] >= '0' && s[z] <= '9')

		{

			digit = s[z] - '0';

			if (x % 2)

				digit = -digit;

			c = c * 10 + digit;

			v = 1;

		if (s[z + 1] < '0' || s[z + 1] > '9')

			break;

			v = 0;

		}

		z++;

	}

	if (v == 0)

		return (0);

	return (c);

}

/**
 * main - Multiplies two numbers given
 * @argc: number of arguments passed
 * @argv: array of arguments being used
 * Return: 0 for Success, 1 for Error
*/

int main(int argc, char *argv[])

{
	int result, num1, num2;

	if (argc < 3 || argc > 3)

	{
		printf("Error\n");

		return (1);
	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
