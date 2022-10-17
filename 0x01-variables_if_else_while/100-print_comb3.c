/**
* main - Entry point
*
* Return: Always 0 (success)
*/

#include<stdio.h>

int main(void)

{


	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
{
	for (j = '1'; j <= '9'; j++)
{
	if (i == j)
	;
	else
{
	putchar(i);
	putchar(j);
	putchar(',');
	putchar(' ');
}
}

}

	putchar('\n');
	return (0);
}

