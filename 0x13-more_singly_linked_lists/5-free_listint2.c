/**
* free_listint2 - frees linked list and assigns head as NULL
*@head: pointer to head pointer of list
*
* Return: void
*/
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}



}
