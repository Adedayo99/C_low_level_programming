/**
* listint_len - length of int linked list
*@h: head pointer to linked list
*
* Return: size_t value
*/

size_t listint_len(const listint_t *h)
{
	int  count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;

		ptr = (*ptr).next;
	}

	return ((size_t) count);
}
