#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print the elements 
 * of a doubly linked list.
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while(current)
	{
		count += 1;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
