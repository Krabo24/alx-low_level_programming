#include "main.h"

 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src);
{
	int z;
	int x;

	i = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[z] = src[x];
		z++;
		x++;
	}

	dest[z] = '\0';
	return (dest);
}
