#include "main.h"

/**
 * _memcpy - the function for copying memory areas
 * @dest: area where memory is stored
 * @src: the place where the memory is copied from
 * @n: the total number of bytes
 * Return: the copied memory with n (number) of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int q = 0;  // Declare and initialize q

    for (; q < n; q++)
    {
        dest[q] = src[q];
        // n--; // No need to decrement n here
    }
    return dest;
}
