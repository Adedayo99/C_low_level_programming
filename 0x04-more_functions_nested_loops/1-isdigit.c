/**
* _isdigit - checks for digit input
*@c: input value
*
* Return: Always 0 (success)
*/

#include "main.h"

int _isdigit(int c)
{
	int flag = 0;


	if ('0' <= c && c <= '9')
{
	flag = 1;
}
	if (flag == 1)
	return (1);

	else
	return (0);
}
