/**
* main - prints its name
*@argc: count ofbinouts
*@argv: inouts
*
* Return: int val
*/

#include "main.h"
#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	_putchar(argv[0][i]);

	_putchar('\n');
	return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
