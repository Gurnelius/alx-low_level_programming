#include "lists.h"
/**
* delete_nodeint_at_index -delete a node at specific
* index in a linked list.
*
*@head: pointer to the list
*@index: index of the node to delte
*
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *tempNode, *current;
	unsigned int size = 0;


	tempNode = *head;

	while ((*head)->next != NULL && size < index - 1)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(tempNode);
			return (1);
		}
		size++;
		*head = (*head)->next;
	}

	if (index - 1 > size)
	{
		*head = tempNode;
		return (-1);
	}

	current = (*head)->next;
	next = current->next;
	(*head)->next = next;
	free(current);
	*head = tempNode;
	return (1);
}
