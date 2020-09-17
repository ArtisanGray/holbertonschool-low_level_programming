#include <stdio.h>
/**
* main - prints all combinations of three different numbers
*
* Return: 0
*/
int main(void)
{
	int i, j, k, d1 = 0, d2 = 1;

	for (i = 0; i < 10; i++)
	{
		d1++;
		for (j = d1; j < 10; j++)
		{
			d2 = d1 + 1;
			for (k = d2; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && d1 == 8 && d2 == 9)
				{
					i = 9;
					d1 = 9;
					break;
				}
				putchar(',');
				putchar(' ');
			}
			if (k == 10)
				d2 = d1++;
		}
		if (j == 10)
			d1 = i + 1;
	}
	putchar('\n');
	return (0);
}
