/**
* print_before_main - prints statement befire main function
*
* Return: no return value
*/
#include<stdio.h>

void print_before_main(void) __attribute__ ((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");

}

int main()
{
}
