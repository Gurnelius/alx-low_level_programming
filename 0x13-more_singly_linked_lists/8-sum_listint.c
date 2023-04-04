#include "lists.h"
/**
*sum_listint - get the sum of elements in list
*@head: pointer to the list
*
*Return: sum of the elements
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
