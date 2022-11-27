/**
* print_list - a function that prints the data in a linked list
*@h: pointer to head of linked list
*
* Return: thr number of nodes
*/
#include <stdio.h>




size_t print_list(const list_t *h)
{
	int count = 0;

	list_t *ptr = h;

	if (ptr === NULL)
	return (NULL);

	while (ptr != NULL)
	{

		count++;
		if ((*ptr).str != NULL)
		printf("[%lu] %s", (*ptr).len, (*ptr).data);

		else
		printf("[0] (nil)");

		ptr = (*ptr).next;
	}

	return ((long unsigned) count);
}
