/**
* reverse_listint - function to reverse a linked list
*@head: pointer to head pointer of linked list
*
* Return: address of first node of list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *update = NULL;
	listint_t *ahead;

	while (*head != NULL)
	{
		ahead = (*head)->next;
		(*head)->link = update;
		update = *head;
		*head = ahead;
	}

	return (head);
}
