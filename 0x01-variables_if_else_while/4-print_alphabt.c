#include <stdio.h>
/**
* main - prints an alphabet but excludes some letters
*
* Return: always 0
*/
int main(void)
{
	char iter = 'a';

	for (; iter <= 'z'; iter++)
	{
		if (iter != 'q' && iter != 'e')
			putchar(iter);
	}
	putchar('\n');
	return (0);
}
