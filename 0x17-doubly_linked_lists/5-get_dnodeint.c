#include "lists.h"

/**
 * get_dnodeint_at_index - get node using
 * the given index.
 *
 * @head: pointer to the head of the list
 * @index: index of the node to search
 *
 * Return: the node or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current)
	{
		if (count == index)
			return (current);

		count += 1;
		current = current->next;
	}
	return (NULL);
}
