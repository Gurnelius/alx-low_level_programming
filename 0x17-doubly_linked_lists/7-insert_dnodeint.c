#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new
 * node at a given index
 *
 * @h: pointer to the head of the list
 * @n: number to be stored by the new node
 * @idx: position to insert the new node
 *
 * Return: newly inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h, *next = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || (*h) == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (next)
	{
		if (count == idx && current)
		{
			current->next = new_node;
			new_node->prev = current;
			new_node->next = next;
			next->prev = new_node;
			return (new_node);
		}
		current = current->next;
		next = current->next;
		count += 1;
	}
	return (add_dnodeint_end(h, n));
}
