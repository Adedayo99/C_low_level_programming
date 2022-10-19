/**
* _isalpha  - checks for alphabetic character
*@c: The character to examine
*
* Return: Always 1 (success)
*/

#include "main.h"

int _isalpha(int c)
{
	int i;
	int flag;
	int j;

	i = 'a';
	j = 'A';

	while (i <= 'z')
{
	i++;
	if (i == c)
	flag = 1;
}

	while (j <= 'Z')
{
	j++;
	if (j == c)
	flag = 1;
}

	if (flag == 1)
	return (1);

	else
	return (0);
}

