#include "lists.h"
/**
*str_len - Get the length of a string
*@str: string pointer
*
*Return: Lenght of the string
*/
int str_len(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
*add_node -  add node to linked list in 1st position
*@head: pointer to head node of the list
*@str: string element for new node
*
*Return: The newly added node, null if fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = str_len(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}
