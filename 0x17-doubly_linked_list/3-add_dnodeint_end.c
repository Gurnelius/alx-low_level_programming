#include "lists.h"

/**
 * add_dnodeint_end - add new node at the
 * the end of a doubly linked list.
 *
 * @head: pointer to the head of the list.
 * @n: integer element to be stored by the node.
 *
 * Return: pointer to the added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
