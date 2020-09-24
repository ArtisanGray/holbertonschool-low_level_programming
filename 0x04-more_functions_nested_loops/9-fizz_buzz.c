#include "holberton.h"
/**
* main - prints Fizz or Buzz based on the different multiples of numbers
*
* Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("FizzBuzz");
			else
				printf("Buzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
