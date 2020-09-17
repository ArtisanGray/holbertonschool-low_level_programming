#include <stdio.h>
/**
* main - prints all combinations of two single numbers
*
* Return: always 0
*/
int main(void)
{
	int i, j, delta;

	for (i = 0; i < 10; i++)
	{
		delta++;
		for (j = delta; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
