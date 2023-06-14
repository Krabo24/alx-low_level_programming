#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments sent
 * @argc: The number of arguments passed
 * @argv: array of arguments used
 * Return: 0 on Success
 */

int main(int argc, char *argv[])

{
	int k;

	for (k = 0; k < argc; k++)

	{

		printf("%s\n", argv[k]);

	}

	return (0);

}
