#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print the array element on  new line
 * @array: array
 * @size: number of elements to print
 * @action: the pointer to print if regular or hex
 * Return: always void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
