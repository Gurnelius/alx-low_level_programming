#include "lists.h"

/**
 * sum_dlistint - get the sum of all
 * data in the list.
 *
 * @head: pointer to the head of the list
 *
 * Return: sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
