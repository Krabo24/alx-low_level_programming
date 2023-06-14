#include <stdio.h>
#include "main.h"

/**
 * main - Prints the total number of arguments used in the program
 * @argc:The number of total arguments passed
 * @argv: array of arguments used
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{

(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
