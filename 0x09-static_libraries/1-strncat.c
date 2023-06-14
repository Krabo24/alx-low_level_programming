#include "main.h"

/**
 * _strncat - concatenates between two strings from most
 * n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int x;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[z] = src[x];
	z++;
	x++;
	}
	dest[z] = '\0';
	return (dest);
}
