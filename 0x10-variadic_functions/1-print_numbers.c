#include "variadic_functions.h"
/**
* print_numbers - prints a list of numbers
* @separator: separator that prints after each number
* @n: count of arguments
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
