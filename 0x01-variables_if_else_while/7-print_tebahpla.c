#include <stdio.h>
/**
* main - prints the alphabet in reverse
*
* Return: 0
*/
int main(void)
{
	char iter = 'z';

	for (; iter >= 'a'; iter--)
		putchar(iter);

	putchar('\n');

	return (0);
}
