#include "lists.h"
/**
*add_nodeint - add node to linked list
*@head: pointer to the list
*@n: element of the node
*
*Return: newly added node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
