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
	list_t *temp;

	while (head)
	{
		temp = head->next;		
		free(head->str);
		free(head);
		head = temp;	
	}
}
