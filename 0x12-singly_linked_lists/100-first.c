#include "lists.h"
int zoom(void) __attribute__((constructor));
/**
* zoom - prints a statement before main
*
* Return: 0
*/
int zoom(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
	return (0);
}
