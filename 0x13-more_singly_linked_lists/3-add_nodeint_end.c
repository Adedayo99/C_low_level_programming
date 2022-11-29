/**
* add_nodeint_end - adds node to end of linked list
*@head: pointer to head pointer of linked list
*@n: value in node
*
* Return: pointer to new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
		return ((listint_t *) NULL);

		(*ptr).n = n;
		(*ptr).next = NULL;


	}

	else
	{

		listint_t *temp;

		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
		return ((listint_t *) NULL);

		(*ptr).n = n;

		temp = *head;

		while (temp->next != NULL)
		temp = temp->next;

		temp->next = ptr;
		ptr->next = NULL;

	}

	return (ptr);
}
