/**
* pop_listint - deletes head node and returns its data
*@head: pointer to head pointer of linked list
*
* Return: data of deleted node
*/
#include  "lists.h"

int pop_listint(listint_t **head)
{
	int a;

	if (*head == NULL)
	return (0);

	a = (*head)->n;
	free((**head));

	return (a);

}
