/**
* free_list - frees a linked list
*@head: head pointer to linked list
*
* Return: void
*/
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;

	while (temp != NULL)
	{

		temp2 = temp->next;
		free(temp);
		temp = temp2;

	}

}


