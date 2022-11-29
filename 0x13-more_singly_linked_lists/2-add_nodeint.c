/**
* add_nodeint - adds node to beginning of linked list
*@head: pointer to head pointer
*@n: int value in node
*
* Return: address of nee element
*/
#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;


	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	return ((listint_t *) NULL);


	(*ptr).n = n;

	(*ptr).next = (*head);

	*head = ptr;

	return (*head);
}
