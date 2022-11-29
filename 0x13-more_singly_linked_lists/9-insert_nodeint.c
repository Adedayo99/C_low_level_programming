/**
* insert_nodeint_at_index - inserts node at an index
*@head: pointer to head pointer
*@idx: index to insert new node
*@n: int value data in new node
*
* Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *ptr;
	listint_t *tp;
	unsigned int count = 0;

	temp = *head;

	while (count < (idx - 1))
	{
		count++;

		temp = temp->next;
		if (temp == NULL)
		return ((listint_t *) NULL);

		if (count == (idx - 1))
		tp = temp;
	}

	ptr = malloc(sizeof(listint_t));
	(*ptr).n = n;
	(*ptr).next = temp->next;

	tp->next = ptr;

	return (ptr);

}
