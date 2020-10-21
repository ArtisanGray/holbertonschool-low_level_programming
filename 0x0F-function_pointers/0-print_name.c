#include "function_pointers.h"
/**
* print_name - prints a name by calling a pointer to a function
* @name: name to print
* @f: function pointer
*
* Return: none
*/
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
