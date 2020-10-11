#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the name of the executed program
* @argc: count of arguments
* @argv: array of arguments given from command line
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
