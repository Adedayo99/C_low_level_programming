/**
* main - prints its name
*@argc: count ofbinouts
*@argv: inouts
*
* Return: int val
*/

#include "main.h"

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n",argv[i]);
	return (0);
}


