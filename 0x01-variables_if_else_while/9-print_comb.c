/**
* main - Entry point
*
* Return: Always 0 (success)
*/

#include<stdio.h>

int main(void)

{

	int ch;

	ch = '0';

	while (ch < '9');
{
	putchar(ch);
	putchar(',');
	putchar(' ');
}
	putchar('9');
	return (0);
}
