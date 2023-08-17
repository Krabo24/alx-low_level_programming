#include "lists.h"
/**
 * free_dlistint - frees all elements of dlistint_t list
 * @head: pointer to the dlistint_t
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *current;

	current = head;

	while (head)
	{
		current = head;
		head = head->next;
		if (current)
			free(current);
	}
}
