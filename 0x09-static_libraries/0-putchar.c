#include <unistd.h>

/**
 * _putchar - Will write the character c to stdout
 *  * @c: This will be the character to be printed
 * Return: 1 success
 * On error, -1 to be returned, set errno appropriately.
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
