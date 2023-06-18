#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array of integers created
 * @min: the minimum range of the values to be stored
 * @max:  the maximum number of elements and range of values stored
 * Return: the pointer to a new array
 */

int *array_range(int min, int max)

{
	int *ptr;
	int i, size;

	if (min > max)

		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)

		return (NULL);

	for (i = 0; min <= max; i++)

		ptr[i] = min++;

	return (ptr);
}
