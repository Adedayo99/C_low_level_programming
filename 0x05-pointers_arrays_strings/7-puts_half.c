/**
* puts_half - prints half of input string
*@str: input string
*
* Return: No return val
*/

#include "main.h"

void puts_half(char *str)
{
	int i;
	int count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
	count += 1;
	}



	if (count % 2 == 0)
		{
		for (count = count / 2; str[count] != '\0'; count++)
		_putchar(str[count]);
		}
	else
		{
		for (count = (count - 1) / 2; str[count] != '\0'; count++)
		_putchar(str[count + 1]);
		}


	_putchar('\n');

}


