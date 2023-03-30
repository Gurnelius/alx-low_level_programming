#include "lists.h"
#include "strlen.h"
/**
  *add_node_end - adds a new node at the end of a list_t.
  *@head: pointer to head element.
  *@str: string to be duplicated
  *
  *Return: address of the new element.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp_node;

	node = malloc(sizeof(list_t));
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	temp_node = *head;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = node;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	return (node);
}
