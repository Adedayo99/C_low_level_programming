#include "main.h"
#include <stdio.h>

int main(void)
{

	char s = 'a';
	char *pt = "myname is";
	int result;

	result = _printf("cs%", s, pt);
	printf("%d", result);
	return (0);

}

