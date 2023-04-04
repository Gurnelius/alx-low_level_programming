#include "lists.h"
/**
* insert_nodeint_at_index - insert a node at specific
* index in a linked list.
*
*@head: pointer to the index
*@idx: index
*@n: element for the new node
*
*Return: newly added node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *next, *tempNode;
	unsigned int size = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	tempNode = *head;

	while ((*head)->next != NULL && size < idx - 1)
	{
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
			return (node);
		}
		size++;
		*head = (*head)->next;
	}

	if (idx - 1 > size)
	{
		free(node);
		*head = tempNode;
		return (NULL);
	}

	next = (*head)->next;
	(*head)->next = node;
	node->next = next;
	*head = tempNode;
	return (node);
}
