/**
* print_list - a function that prints the data in a linked list
*@h: pointer to head of linked list
*
* Return: thr number of nodes
*/
#include <stdio.h>
#include "lists.h"



size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *ptr = h;

	if (ptr == NULL)
	return (0);

	while (ptr != NULL)
	{

		count++;
		if ((*ptr).str != NULL)
		printf("[%u] %s\n", (*ptr).len, (*ptr).str);

		else
		printf("[0] (nil)\n");

		ptr = (*ptr).next;
	}

	return ((unsigned) count);
}
