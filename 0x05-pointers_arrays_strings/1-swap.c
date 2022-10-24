/**
* swap_int - swaps input values
*@a: input variables
*@b: input var
*Return: No return value
*/

#include "main.h"

void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b =  swap;
}
