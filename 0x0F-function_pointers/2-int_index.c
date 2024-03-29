#include "function_pointers.h"

/**
 * int_index - display index place if the comparison = true, else -1
 * @array: array
 * @size: size of the elements in the array
 * @cmp: pointer to the function of one of the 3 in the main
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);
}
