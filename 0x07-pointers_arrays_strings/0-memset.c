/**
* *_memset - fills memory with constant byte
*@s: input string
*@b: constant byte dor filling
*@n: num of bytes to fill
*
* Return: pointer to mem filled area
*/

char *_memset(char *s, char b, unsigned char n)
{
	int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (ptr);
	_putchar('\n');

}
