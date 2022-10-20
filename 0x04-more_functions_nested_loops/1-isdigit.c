/**
* _isdigit - checks for digit input
*@c: input value
*
* Return: Always 0 (success)
*/

#include "main.h"

int _isdigit(int c)
{
	int i;
	int flag;

	i = '0';

	while (i <= '9')
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
