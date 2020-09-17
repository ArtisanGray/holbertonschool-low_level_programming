#include <stdio.h>
/**
* main - prints all single digit base16
*
*
* Return: 0
*/
int main(void)
{
	char iter = '0';

	while (1)
	{
		putchar(iter);
		if (iter == '9')
			iter += 39;
		if (iter == 'f')
			break;
		iter++;
	}
	putchar('\n');
	return (0);
}
