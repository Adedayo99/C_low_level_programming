/**
* reverse_array - reverses an array of int
*@*a: pointer to int array
*@n: number of ints to swap
*
* Return: none
*/

#include "maim.h"

void reverse_array(int *a, int n)
{
	int *ptr = a;
	int i;
	int temp;
	j = ((int) sizeof(a) / (int) sizeof(a[0])) - 1

	for (i = 0; i < n; i++)
	{

		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
		j--;
	}

}
