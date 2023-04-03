#include "lists.h"
/**
*listint_len - Get the size of a linked list
*@h: Pointer to list
*
*Return: size of the list
*/
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
