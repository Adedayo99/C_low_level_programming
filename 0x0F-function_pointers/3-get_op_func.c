/**
* get_op_func - func to decide operation to call
*@s: operator input
*
* Return: pointer to a function
*/
#include "3-calc.h"
#include<stddef.h>

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};


	while (ops[i].op != NULL)
	{
		if ((*ops[i].op) == *s)
		return (*(ops[i].f));
	
		i++;
	}
	return (NULL);

}
