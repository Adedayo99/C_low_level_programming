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
	int flag = 0;
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		if (temp == NULL)
		flag == 1;
		
		free(head);
		head = temp;	
	}

	if (flag == 1)
	{
		free(head);
		free(temp);
	}

}
