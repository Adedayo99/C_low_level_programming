/**
* print_strings - func to print strings
*@separator: delimiter
*@n: number of args
*
* Return: non
*/

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{

	int i;
	char *string;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		for (i = 0; i < (int) n; i++)
		{
		string = va_arg(args, char *);
		printf("%s ", string);
		}
	}

	else
	{
		for (i = 0; i < (int) n; i++)
		{
		string = va_arg(args, char *);
		printf("%s", string);

		if (i < (int) (n - 1))
		printf("%c ", *separator);
		}

	}


	printf("\n");
}
