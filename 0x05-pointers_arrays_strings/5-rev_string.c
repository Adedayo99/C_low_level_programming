/**
* rev_string - string reversal f
*@s: input string
*
* Return: No return val
*/

#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int j = 0;

	while (s[i] != '\0')
	{
	count += 1;
	i++;
	}

	for (i = 0; i < count / 2; i++)
	{
	j = s[i];
	s[i] = s[count - i - 1];
	s[count - i - 1] = j;
	}


}
