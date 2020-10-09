#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - prints all arguments on seperated by new line
* @argc: count of arguments
* @argv: array of arguments passed by command line
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
