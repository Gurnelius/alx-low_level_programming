#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * at the given index.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 -sucess, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL;

		*head = current->next;
		free(current);
		return (1);
	}

	while (current && count < index )
	{
		count += 1;
		current = current->next;
	}

	if (count == index && current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	else if (count == index && current->next)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	free(current);
	return (-1);
}

