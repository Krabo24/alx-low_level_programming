#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

	/**
	 * check_num - check - strings that are digits
	 * @str: array str
	 * Return: 0 Always
	 */

	int check_num(char *str)

	{
		/*Declare the variables*/
		unsigned int count;

		count = 0;
		while (count < strlen(str)) /*count strings*/

		{
			if (!isdigit(str[count])) /*check if str are digits*/
			{
				return (0);
			}

			count++;
		}
		return (1);
	}

	/**
	 * main - Prints program name
	 * @argc: Count all the arguments
	 * @argv: Arguments passed
	 * Return: 0 Success Always
	 */

	int main(int argc, char *argv[])

	{
		/*Declare the variables*/
		int count;
		int str_to_int;
		int sum = 0;

		count = 1;
		while (count < argc) /*Checks through the  entire array*/
		{
			if (check_num(argv[count]))

			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}

			/*The of outcome if one of the numbers contain symbols that are not digits*/
			else
			{
				printf("Error\n");
				return (1);
			}

			count++;
		}

		printf("%d\n", sum); /*print sum*/

		return (0);
	}

