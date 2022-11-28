/**
* print_listint - prints elements of a listint list
*@h: head pointer to list
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *ptr = h;

	if (ptr == NULL)
	return (0);

	while (ptr != NULL)
	{

		count++;
		printf("%d\n", (*ptr).n);

		ptr = (*ptr).next;
	}

	return ((unsigned int) count);
}
