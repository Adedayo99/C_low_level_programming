/**
* free_list2 - frees linked list and assigns head as NULL
*@head: pointer to head pointer of list
*
* Return: void
*/
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;

	while (temp =! NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}

	*head = NULL;
}
