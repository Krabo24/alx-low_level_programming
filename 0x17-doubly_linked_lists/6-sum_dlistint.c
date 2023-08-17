#include "lists.h"
/**
 * sum_dlistint - the sum of all data (n) of the dlistint_t linked list
 * @head: the pointer to the dlistint_t head
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
