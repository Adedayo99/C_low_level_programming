/**
* array_range - returns array with vals in range
*@min: lower val
*@max: uoper val
*
* Return: pointer to array
*/

#include <stddef.h>
#include <stdlib.h>

int *array_range(int min, int max)
{

	int i;
	int *ptr;
	int num = max - min + 1;

	if (min > max)
	return (NULL);

	ptr = malloc(sizeof(int) * num);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);

}
