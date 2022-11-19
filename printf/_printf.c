/**
* _printf - function print some input types
*@format: format specifiers
*
* Return: int value
*/
#include <stdarg.h>
#include <unistd.h>
int printf_1(char *c);
int printf_2(const char *c);
int format_checker(const char *p, int len);

int _printf(const char *format,...)
{
	int x, k;
	int i, len = 0;
	char  *ch;
	int return_val;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	len++, i++;

	if (len > 0)
	k =  format_checker(format, len);
	
 
	if (k == 0)
	{
		for(i = 0; format[i] != '\0'; i++)
		return_val =  printf_2(&format[i]);
	}	  


	for (i = 0; i < len; i++) 
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			x = va_arg(args, int);
			return_val +=  printf_1((char *) &x);
		}

		if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
		}

		if (format[i] == '%' && format[i + 1] == 's')
		{
			ch = va_arg(args, char *);
			return_val +=  printf_2(ch);
		}


	}

	va_end(args);
	return (return_val);
}




/**
* printf_1 - writes char to screen
*@c: pointer to char
*
* Return: int val
*/

int printf_1(char *c)
{
	int flag = 0;
	write(1, c, 1);

	return (flag += 1);
}


/**
* printf_2 - writed char to screen
*@c: pointer to char
*
* Return: int val
*/

int printf_2(const char *c)
{
	int flag = 0;
	write(1, c, 1);
	flag++;
  
	return(flag);
}

/** 
* format_checker - checks if formatted printing is the goal
*@format: format specifier
*@len: length of format specifier
*
* Return: int val
*/

int format_checker(const char *p, int len)
{
	int i;
	int flag = 0;
    
 	for (i = 0; i < len; i++)
	{
		if (p[i] == '%')
		flag = 1;
		return(flag);
	}
    
	return (flag);
}
