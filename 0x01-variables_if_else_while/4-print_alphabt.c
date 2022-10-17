/**
* main - Entry point
*
* Return: Always 0 (success)
*/

#include<stdio.h>

int main(void)
{

	int ch;

	ch = 97;

	while (ch <= 'z')
{
	if (ch == 'e' || ch == 'q')
{
	;
}
	else
{
	putchar(ch);
	ch++;
}
}
	return (0);
}
