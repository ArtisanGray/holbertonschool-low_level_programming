#include "3-calc.h"
/**
* get_op_func - returns a call to a function based on a certain input
* @s: input character
*
* Return: function pointer or exits with error code
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
