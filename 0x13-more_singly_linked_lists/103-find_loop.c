/**
* find_listint_loop - find loop in linked list
*@head: head pointer to list
*
* Return: address where loop starts
*/

#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
	return ((listint_t *) NULL);

	listint *temp1 = head;
	listint *temp2 = head;

	while (1)
	{
		temp1 = head->next;
		temp2 = head->next->next;

		if (temp1 == temp2)
		temp1 = temp1;

		if (temp1 == NULL || temp2 == NULL)
		temp1 = NULL;
	}

	return (temp1);
}
