/**
* main - Entry point
*
* Return: Always 0 (success)
*/

#include<stdio.h>


int main(void)

{
	int ch;
	int ch1;

	ch = 97;
	ch1 = 65;

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
}

	while (ch1 <= 'Z')
{
	putchar(ch1);
	ch1++;
}


	return (0);
}
