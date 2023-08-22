#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src) {
    int z = 0;
    int x = 0;

    while (dest[z] != '\0') {
        z++;
    }

    while (src[x] != '\0') {
        dest[z] = src[x];
        z++;
        x++;
    }

    dest[z] = '\0';
    return dest;
}
