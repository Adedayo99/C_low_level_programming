/**
* free-list - frees memory used for list_t
*@head: pointer to list
*
* Return: void
*/


void free_list(list_t *head)
{
	list_t *ptr = head;


	while (head != NULL)
	{
		head = (*head).next;
		free(ptr); 
				
	}

}
