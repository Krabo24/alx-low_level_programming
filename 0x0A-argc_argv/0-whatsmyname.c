#include <stdio.h>
#include "main.h"

/**
 * main - Will print the name of the program
 * @argc: is where the number of arguments will be recorded
 * @argv: Is the array of arguments in our program
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
