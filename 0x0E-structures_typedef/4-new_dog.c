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
	char *f_name = name;
	char *f_owner = owner;

	dog_t *new_dog;

	new_dog->name = f_name;
	new_dog->age = age;
	new_dog->owner = f_owner;

	return (new_dog);
}	
