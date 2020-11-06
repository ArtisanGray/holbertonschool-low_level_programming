#include "holberton.h"
/**
* binary_to_uint - converts binary to unsigned integer
* @b: binary number string pointer
*
* Return: 0 or positive number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int cint = 0, sum = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0' && len < 32; len++)
		continue;

	for (len--; len >= 0; len--, sum *= 2)
	{
		if (b[len] == '1')
			cint += sum;
		if (b[len] != '1' && b[len] != '0')
			return (0);
	}
	return (cint);
}
