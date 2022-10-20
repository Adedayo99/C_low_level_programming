/**
* _isupper - checks for uppercase
*@c: inout character to check
*
* Return: Always 0 (success)
*/

#include "main.h"

int _isupper(int c)
{
	int i;
	int flag;

	i = 'A';
	while (i <= 'Z')
{
	i++;
	if (i == c)
	flag = 1;
}

	if (flag == 1)
	return (1);

	else
	return (0);
}
