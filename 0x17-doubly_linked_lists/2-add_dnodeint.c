#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of  dlistint_t list
 * @head: pointer to the head pointer
 * @n: integer
 * Return: the node address or null if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
