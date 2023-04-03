#include "lists.h"
/**
*free_listint - free a list
*@head: pointer to the list
*
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head != NULL)
	{
		tempNode = head;
		head = head->next;
		free(tempNode);
	}
}
