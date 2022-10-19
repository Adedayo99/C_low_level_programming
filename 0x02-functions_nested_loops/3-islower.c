/**
* is_lower - checks for lowercase characters
*
* Return: Always 1 (success)
*/

#include "main.h"

int _islower(int c)
{
	int i;
	int flag;

	i = 'a';
	while (i <= 'z')
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
