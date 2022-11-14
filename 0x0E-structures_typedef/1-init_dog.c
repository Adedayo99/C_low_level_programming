/**
* init_dog - function to initialize dog
*@d: pointer to specific dog var
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
* Return: non
*/
#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;

	}
}

