#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of  dlistint_t list
 * @head: pointer to the head pointer
 * @n: integer
 * Return: the node address or null if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
