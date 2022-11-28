/**
* free_list - frees memory used for list_t
*@head: pointer to list
*
* Return: void
*/
#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;		
		free(head);
		head = temp;	
	}

}
