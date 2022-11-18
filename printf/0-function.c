/**
* _printf - function print some input types
*@format: format specifiers
*
* Return: int value
*/
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	int i, len = 0;
	int x, j, slen;

	char *xx;
	int flag = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	len++, i++;


	for (i = 0; i < (int) len; i++)
	{
		if (format[i] == 'c')
		{
			x = va_arg(args, int);
			write(1, &x, 1);
			flag += 1;
		}

		if (format[i] == '%')
		{

			write(1, "%", 1);
			flag += 1;
		}

		if (format[i] == 's')
		{
			xx = va_arg(args, char *);
			j = 0;
			while (xx[j] != '\0')
			{
				slen++;
				write(1, &xx[j], slen);
				j++;
			}
			flag += slen;
			
		}

	}
	va_end(args);
	return (flag);
}
 
