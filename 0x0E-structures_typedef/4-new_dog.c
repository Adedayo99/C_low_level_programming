/**
* new_dog - creates a new dog from struct type
*@name: dog namr
*@age: dog age
*@owner: dog owner
*
* Return: 0
*/
#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	char *fname = name;
	char *fowner = owner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).name = fname;
	(*ptr).age = age;
	(*ptr).owner = fowner;

	return (ptr);
}	
