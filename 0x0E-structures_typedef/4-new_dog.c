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

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	return (NULL);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	return (ptr);
}	
