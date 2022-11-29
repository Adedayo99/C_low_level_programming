/**
* free_list - frees a linked list
*@head: head pointer to linked list
*
* Return: void
*/
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (1)
	{

		temp = temp->next;
		free(head);
		head = temp;

		if (head == NULL)
		break;
	}

}


