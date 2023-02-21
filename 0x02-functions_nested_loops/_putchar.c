#include <unistd.h>

/**
 * program that prints _putchar,
 * followed by a new line.
 * Return: 0 Success
 * Error return -1
 */

int _putchar(char c)

{
        return (write(1, &c, 1));

}
