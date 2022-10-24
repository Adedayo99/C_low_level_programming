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

	for (i = 0; a[i] != '\0' && i <= n - 2; i++)
	{
	printf("%d, ", a[i]);
	}
	_putchar(a[n-1]);

}
