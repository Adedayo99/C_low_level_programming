/**
* print_all - prints ints and strings
*@format: input formats
*
* Return: non
*/
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{

	int i = 0;
	int len = 0;

	int ch;
	int in;
	double fl;
	char *str;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	len++, i++;

	i = 0;

	while (i <= len)
	{
		if (format[i] == 'c')
		{
		ch = va_arg(args, int);
		printf("%c ", ch);
		}

		else if (format[i] == 'i')
		{
		in = va_arg(args, int);
		printf("%d ", in);
		}

		else if (format[i] == 'f')
		{
		fl = va_arg(args, double);
		printf("%f ", fl);
		}

		else if (format[i] == 's')
		{
		str = va_arg(args, char *);
		if (str == NULL)
		printf("(nil)");
		else
		printf("%s ", str);
		}

		i++;
	}
	printf("\n");
}
