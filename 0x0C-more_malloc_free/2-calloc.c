#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte to fill memory
 * @s: filled memory area
 * @b: char to be copied
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: total number of elements in array
 * @size: size of every element individually
 * Return: allocated memory of the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)

		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
