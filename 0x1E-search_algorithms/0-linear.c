#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for the value in an array of
 * @array: the array to search the value in
 * @size: the size of the array
 * @value: the value to look for
 *  integers using the Linear search algorithm
 * or -1 if not found
 * Return: the index of the found value,
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
