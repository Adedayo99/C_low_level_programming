/**
* print_dog - func to print strcut dog
*@d: pointer to dog struct
*
* Return: non
*/

#include <stddef.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	exit();

	if (d->name != NULL)
 	printf("Name: %s", d->name);

	else
	printf("Name: (nil)");


	if (d->age != NULL)
	printf("Age: %d", d->age);

	else
	printf("Age: (nil)");


	if (d->owner != NULL)
	printf("Owner: %s", d->owner);

	else
	printf("Owner: (nil)");

}
