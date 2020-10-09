#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - prints the number of arguments
* @argc: the number of arguments
* @argv: array of arguments passed through command line
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		continue;
	printf("%d\n", argc);
	return (0);
}
