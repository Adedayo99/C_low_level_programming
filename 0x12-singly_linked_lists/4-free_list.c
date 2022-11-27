/**
* free-list - frees memory used for list_t
*@head: pointer to list
*
* Return: void
*/


void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp_ptr;

	while (ptr != NULL)
	{
		temp_ptr = ptr;
		
		free((*ptr).str);
		free((*ptr).len);
		free(temp_ptr);
		ptr = (*ptr).next;
	}

}
