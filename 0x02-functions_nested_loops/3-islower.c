/**
* is_lower - checks for lowercase characters
*
* Return: Always 1 (success)
*/

#include "main.h"

int is_lower(int c)
{
	int i;
	int flag;

	flag = 0;
	i = 'a';
	while (i <= 'z')
{
	while (i == c)
{
	flag = 1;
	break;
}


}

	if (flag == 1)
	return (1);

	else
	return (0);

}
