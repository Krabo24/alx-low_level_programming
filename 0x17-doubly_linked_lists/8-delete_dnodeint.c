#include "lists.h"
/**
 * delete_dnodeint_at_index - to delete node at given index
 * @head: the pointer to head of doubly linked list
 * @index: the Index of the node to be deleted
 * Return: 1 if successful and -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	 dlistint_t *current;
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
