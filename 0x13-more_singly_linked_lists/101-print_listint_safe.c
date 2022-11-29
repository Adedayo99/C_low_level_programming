/**
* print_listint_safe - prints the elements of a linked list
*@head: pointer to head pointer
*
* Return: num of nodes in list
*/
#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	int count = 0;

	if (head == NULL)
	exit(98);

	temp = head;

	while (temp != NULL)
	{
		printf("[%p] %u\n", (void *)temp, temp->n);
		temp = temp->next;

		count++;
	}

	return ((size_t) count);

}
