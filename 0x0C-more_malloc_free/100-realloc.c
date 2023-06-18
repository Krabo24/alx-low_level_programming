#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - will reallocate memory block using malloc and free
 * @ptr: memory previsouly allocated by malloc to the pointer
 * @old_size: the size of allocated memory for ptr
 * @new_size: the new size of new memory block
 * Return: newly allocated memory blockto the pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr)

	{
		free(ptr);

		return (NULL);
	}
	if (!ptr)

		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (!ptr1)

		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)

	{
		for (i = 0; i < new_size; i++)

			ptr1[i] = old_ptr[i];
	}

		if (new_size > old_size)

	{
	for (i = 0; i < old_size; i++)

		ptr1[i] = old_ptr[i];

	}

	free(ptr);

	return (ptr1);
}
