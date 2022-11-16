/**
* array_iterator - func to iterate array and apply instrcutions
*@array: input array
*@size: size of inpuy array
*@action: instrcution set to apply
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int));
{

	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
