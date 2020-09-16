#include <stdio.h>
#include <unistd.h>
/**
* main - prints a line to stderr
*
* Return: 1
*/
int main(void)
{
	char *buf = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; buf[i]; i++)
		continue;
	write(2, buf, i + 1);
	return (1);
}
