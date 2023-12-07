#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - get the size of a
 * doubly linked list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count += 1;
		current = current->next;
	}
	return (count);
}
