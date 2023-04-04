#include "lists.h"
/**
*print_listint - Prints integers stored in
*in a linked list
*
*@h: pointer to list
*
*Return: size of the list
*/
size_t print_listint(const listint_t *h)
{
	int size;

	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
