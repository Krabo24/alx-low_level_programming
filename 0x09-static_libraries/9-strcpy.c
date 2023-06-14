#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: the place to copy to
 * @src: where to copy from
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int b = 0;

	while (*(src + v) != '\0')
	{
		v++;
	}
	for ( ; b < v ; x++)
	{
		dest[b] = src[b];
	}
	dest[v] = '\0';
	return (dest);
}
