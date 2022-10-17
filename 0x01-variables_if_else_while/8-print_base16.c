/**
* main - Entry point
*
* Return: Always 0 (success)
*/

#include<stdio.h>

int main(void)
{

	int ch;
	int i;

	ch = '0';
	i = 97;

	while (ch <= '9')
{
	putchar(ch);
	ch++;
}

	while (i <= 102)
{
	putchar(i);
	i++;
}
	putchar('\n');
	return (0);
}
