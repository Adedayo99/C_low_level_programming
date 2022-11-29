/**
* get_nodeint_at_index - retrieve node at an index 
*@head: head pointer to list
*@index: index of node to fetch
*
* Return: address of desired node
*/

#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}

