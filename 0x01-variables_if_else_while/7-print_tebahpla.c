/**
* main - Entry point
*
* Return:  Always 0 (success)
*/

#include<stdio.h>

int main(void)

{

	int ch;

	ch = 122;

	while (ch >= 97)
{
	putchar(ch);
	ch--;
}
	putchar('\n');
	return (0);
}
