#include <stdio.h>
#include "lists.h"
/**
  *print_list - prints all the elements of a list_t.
  *@h: pointer to list.
  *
  *Return: the number of nodes.
  */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
