#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at  the index
 * @head: the pointer to the dlistint_t
 * @index: the unsigned number
 * Return:  the node of the dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (NULL);
}
