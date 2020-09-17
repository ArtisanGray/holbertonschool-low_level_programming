#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: always 0
*/
int main(void)
{
	char iter = 'a';

	for (; iter <= 'z'; iter++)
		putchar(iter);
	putchar('\n');

	return (0);
}
