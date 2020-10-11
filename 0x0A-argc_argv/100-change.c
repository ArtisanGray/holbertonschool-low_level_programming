#include <stdlib.h>
#include <stdio.h>
/**
* main - counts the number of coins needed to break change of a value
* @argc - count of arguments
* @argv - arguments passed through command line
*
* Return: 0 on success, 1 on fail.
*/
int main(int argc, char *argv[])
{
	int count = 0, coinv, i;
	int sep[] = {25, 10, 5, 2, 1, 0};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coinv = atoi(argv[1]);
		if (coinv < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 6; i++)
		{
			while (coinv != 0)
			{
				if (coinv / sep[i] == 0 && coinv < sep[i])
					break;
				coinv -= sep[i];
				count++;
			}
			if (coinv == 0)
				break;
		}
		printf("%d\n", count);
	}
	return (0);
}
