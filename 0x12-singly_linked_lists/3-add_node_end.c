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

	ptr = malloc(sizeof(list_t));
	(*ptr).str = strdup(str);
	(*ptr).len = strlen(str);
	
	while ((**head).next != NULL)
	*head = (**head).next;

	(**head).next = ptr;
	(*ptr).next = NULL;

	return (ptr);
}


