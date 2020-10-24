#include "variadic_functions.h"
/**
* print_all - prints all arguments given
* @format: list of specifiers
*
* Return: null
*/
void print_all(const char * const format, ...)
{
	va_list vl;
	int i = 0, fail;
	char *posarg;

	va_start(vl, format);

	while (format[i] != '\0' && format != NULL)
	{
		fail = 0;
		switch (format[i])
		{
			case 's':
				posarg = va_arg(vl, char *);
				if (posarg == NULL)
				{printf("(nil)");
					break; }
				printf("%s", posarg);
				break;
			case 'f':
				printf("%f", (float)va_arg(vl, double));
				break;
			case 'c':
				printf("%c", (char)va_arg(vl, int));
				break;
			case 'i':
				printf("%d", va_arg(vl, int));
				break;
			default:
				fail = 1;
				break;
		}
		if (format[i + 1] != '\0' && fail == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
