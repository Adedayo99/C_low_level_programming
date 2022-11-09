/**
* main - prints its name
*@argc: count ofbinouts
*@argv: inouts
*
* Return: int val
*/

#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	_putchar(argv[0][i]);

	_putchar('\n');
	return (0);
}
