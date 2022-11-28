/**
* print_before - prints statement befire main function
*
* Return: no return value
*/
#include<stdio.h>

void print_before(void) __attribute__ ((constructor));

void print_before(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");

}

