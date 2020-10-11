#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - multiplies two numbers, if they exist
* @argc: count of arguments
* @argv: the arguments passed through command line
*
* Return: mul or 1 on error
*/
int main(int argc, char *argv[])
{
	int mul = 0, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;
	}
	printf("%d\n", mul);
	return (mul);
}
