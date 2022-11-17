/**
* print_numbers - prints nums and given seperator
*@separator: delimiter
*@n: num of args
*
* Return: no returrn val
*/
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{

	int i, num;

	va_list args;

	va_start(args, n)


	if (*separator == NULL)
	{
		for (i = 0; i < (int) n; i++)
		{
		num = va_arg(args, int);
		printf("%d ", num);
		}
	}

	else
	{
		for (i = 0; i < (int) n; i++)
		{
		num = va_arg(args, int);
		printf("%d%c ", num, *separator);
		}
	}

	printf("\n");
}
