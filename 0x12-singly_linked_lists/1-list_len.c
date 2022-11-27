/**
* list_len - returns number of list elements
*@h: pointer to struct of type list_t
*
* Return: size_t value
*/

size_t list_len(const list_t *h)
{

	size_t count;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;

		ptr = (*ptr).next;
	}

	return (count);
}

