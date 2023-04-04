#include "lists.h"
/**
*get_nodeint_at_index - get nth node of a list
*@head: pointer to the list
*@index: index of the node
*
*Return: node at the index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int size = 0;
	listint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (size == index)
			return (node);

		node = node->next;
		size++;
	}
	return (NULL);
}
