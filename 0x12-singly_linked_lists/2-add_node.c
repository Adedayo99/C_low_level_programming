/**
* add_node - adds node to beginning of linked-list
*@head: pointer to initial start of list
*@str: content of new node
*
* Return: pointer to nre beginning of linked list
*/
#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;


	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	return ((list_t *) NULL);


	(*ptr).str = strdup(str);
	(*ptr).len = strlen(str);

	(*ptr).next = (*head);

	*head = ptr;

	return (*head);
}
