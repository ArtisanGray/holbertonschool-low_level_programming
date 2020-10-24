#include "variadic_functions.h"
/**
* print_strings - prints a given number of strings
* @separator: string to print after a string
* @n: number of arguments
*
* Return: null
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *temp;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(strs, char *);
		printf("%s", (temp != NULL ? temp : "(nil)"));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
