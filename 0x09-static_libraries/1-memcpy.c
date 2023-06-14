#include "main.h"

/**
 *_memcpy - the function for copying memory areas
 *@dest: area where memory the is stored
 *@src: the place where the memory is copied to
 *@n: the total number of bytes
 *Return: the copied memory with n (number) of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int w = n;

	for (; q < i; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
