#include "main.h"
/**
 * main - check the code for uppercase letters
 * @c : input
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

		return (1);
	else
		return (0);
}
