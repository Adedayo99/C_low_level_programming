/**
* add_node_end - adds a node to end of linked -list
*@head: pointer to pointer of linked list
*@str: content of new node
*
* Return: address of new node
*/
#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *ptr;
	list_t *temp = *head;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	return ((list_t *) NULL);


	(*ptr).str = strdup(str);
	(*ptr).len = strlen(str);
	(*ptr).next = NULL;

	while ((**temp).next != NULL)
	*temp = (**temp).next;

	(**temp).next = ptr;

	if ((**temp).next == NULL)
	return (NULL);

	else
	return ((**temp).next);
}


