/**
* int_index - function to run other func checks on ints
*@array: pointer to input array
*@size: length of array
*@cmp: pointer to instructions to be run
*
* Return: an Int val
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;
	int flag = 0;

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		result = (*cmp)(array[i]);

		if (result != 0)
		{
		flag = i;
		}
	}

	if (flag != 0)
	return (flag);


	else
	return (-1);
}
