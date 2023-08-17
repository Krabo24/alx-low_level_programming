#include "lists.h"
/**
 * insert_dnodeint_at_index -to insert new node at  given position
 * @h: the pointer to the list pinter
 * @idx: the unsigned number
 * @n:  the number
 * Return: the node or the Null in the error
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node, *current;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = add_dnodeint(&(current->next), n);
	if (new_node == NULL)
		return (NULL);

	new_node->prev = current;
	return (new_node);
}
