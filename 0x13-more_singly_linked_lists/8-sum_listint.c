/**
* sum_listint - sum of int vals in all nodes of linked list
*@head: head pointer to linked list
*
* Return: sum value
*/

#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += (*temp).n;
		temp = temp->next;
	}

	return (sum);
}

