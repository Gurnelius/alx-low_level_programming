#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to the head
 * of the list.
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
