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
	list_t *new;
	list_t *ptr;

	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		return((list_t *) NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		*head = new;
		return (*head);
	}

	else
	{

		ptr = *head;
		while (1)
		{
			if (ptr->next == NULL)
			break;
			ptr = ptr->next;
		}

		new = malloc(sizeof(list_t));
		if (new == NULL)
		return((list_t *) NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		ptr->next = new;
	}

	return (new);

}


