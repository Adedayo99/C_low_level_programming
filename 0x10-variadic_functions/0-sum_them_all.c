/**
* sum_them_all - func to sum unspecified no of inputs
*@n: number of inputs
*
* Return: sum
*/
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i, j;
	int sum = 0;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}

	va_end(args);

	return (sum);
}
