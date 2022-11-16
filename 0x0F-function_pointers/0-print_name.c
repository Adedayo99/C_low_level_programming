/**
* print_name - a function to print name via func poimters
*@name: name input
*@f: pointer to printing instrcutions to use
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
