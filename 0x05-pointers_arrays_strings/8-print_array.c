/**
* print_array - prints array elements
*@a: input array
*@n: numbrr of elements to print
*
* Return: No return val
*/

#include "main.h"
#include "stdio.h"

void print_array(int *a, int n)
{
	int i;

	flag = 0;

	for (i = 0; a[i] != '\0' && i <= n - 2; i++)
	{

	if (n <= 0)
	break;
	printf("%d, ", a[i]);
	}

	if (n > 0)
	{
	printf("%d", a[n - 1]);
	printf("\n");
	}
}

