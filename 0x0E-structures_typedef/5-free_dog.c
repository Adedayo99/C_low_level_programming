/**
* free_dog - function to free struct var
*@d: pointer to struct dog var
*
* Return: null
*/
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free((*d).name);
	free((*d).owner);

	free(d);
}

