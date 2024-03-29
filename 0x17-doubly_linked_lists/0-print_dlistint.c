#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint_t list.
 * @h: pointer to the dlistint_t head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
