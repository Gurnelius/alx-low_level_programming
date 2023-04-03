#include "lists.h"
/**
*pop_listint - remove head node of a linked list
*@head: pointer to the list
*
*Return: integer element of the node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = *head;
	n = (*head)->n;
	*head = node->next;
	free(node);

	return (n);
}
