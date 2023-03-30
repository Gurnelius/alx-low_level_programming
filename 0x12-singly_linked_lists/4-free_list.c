#include "lists.h"
/**
  *free_list - frees a list_t
  *@head: pointer to head of list.
  *
  *Return: 0.
  */
void free_list(list_t *head)
{
	list_t *node;

	node = head;
	while (head != NULL)
	{
		node = head;
		free(head->str);
		free(head);
		head = node->next;
	}
}
