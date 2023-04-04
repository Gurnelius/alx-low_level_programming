#include "lists.h"
/**
*add_nodeint_end - add node to list at the end
*@head: pointer to list
*@n: integer element of the new node
*
*Return: added the node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tempNode;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
		*head = node;
	else
	{
		tempNode = *head;
		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		tempNode->next = node;
	}
	return (node);
}
