#include "main.h"

/**
 * _memset - display a block of memory with only a specific value
 * @q: starting address of memory being shown
 * @e: the value we desire
 * @w: the number of bytes that will be changed
 * Return: the changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
