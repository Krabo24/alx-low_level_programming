#include "main.h"

/**
 * _memset - display a block of memory with only a specific value
 * @s: starting address of memory being shown
 * @b: the value we desire
 * @n: the number of bytes that will be changed
 * Return: the changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n) {
    int i;

    for (i = 0; n > 0; i++) {
        s[i] = b;
        n--;
    }
    
    return s;
}
