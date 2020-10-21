#include "3-calc.h"
/**
* main - gets operator and arguments from terminal
* @argc: count of arguments
* @argv: arguments themselves
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int a1, a2, (*func)(int, int);

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	func = (*get_op_func)(argv[2]);
	printf("%d\n", func(a1, a2));
	return (0);
}
