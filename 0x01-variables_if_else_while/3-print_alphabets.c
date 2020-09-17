#include <stdio.h>
/**
* main - prints two alphabets, followed by new line
*
* Return: always 0
*/
int main(void)
{
	char iter = 'a';

	for (; iter <= 'z'; iter++)
		putchar(iter);

	iter -= 58;

	for (; iter <= 'Z'; iter++)
		putchar(iter);
	putchar('\n');

	return (0);
}
