#include "lists.h"

/**
 * add_dnodeint - add new node at the
 * the beginning of a doubly linked list.
 *
 * @head: pointer to the head of the list.
 * @n: integer element to be stored by the node.
 *
 * Return: pointer to the added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;

	if ((*head) == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
