#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int subcheck(char *s);
/**
* main - adds a number of numbers
* @argc: count of arguments
* @argv: array of arguments passed through command line
*
* Return: 0 on success, 1 on fail
*/
int main(int argc, char *argv[])
{
	int i, sum = 0, chk = 0;

	for (i = 1; i < argc; i++)
	{
		chk = subcheck(argv[i]);
		if (!chk)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
* subcheck - checks a substring to see if atoi actually failed
* @s: string pointer for substring
*
* Return: 0 on success, 1 on fail
*/
int subcheck(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (isdigit(s[j]) > 0)
		{
			return (1);
		}
	}
	return (0);
}
