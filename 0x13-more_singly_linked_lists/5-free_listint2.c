#include "lists.h"
/**
*free_listint2 - free a link list
*@head: pointer to the list
*
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	while (*head != NULL)
	{
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
	}
}
