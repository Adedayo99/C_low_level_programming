/**
* print_listint - prints elements of a listint list
*@h: head pointer to list
*
* Return: number of nodes
*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *ptr = h;

	if (ptr == NULL)
	return (0);

	while (ptr != NULL)
	{

		count++;
		printf("%u\n", (*ptr).n);

		ptr = (*ptr).next;
	}

	return ((unsigned int) count);
}
