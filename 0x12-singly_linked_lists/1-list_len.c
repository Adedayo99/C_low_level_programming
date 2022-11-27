/**
* list_len - returns number of list elements
*@h: pointer to struct of type list_t
*
* Return: size_t value
*/
#include "lists.h"
#include <stdlib.h>

size_t list_len(const list_t *h)
{

	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;

		ptr = (*ptr).next;
	}

	return (count);
}

