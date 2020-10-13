#include "holberton.h"
/**
* argstostr - converts arguments to one string
* @ac: count of arguments
* @av: arguments
*
* Return: null on fail, string on success
*/
char *argstostr(int ac, char **av)
{
	int length, i, j, buff = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, length++)
	{
		for (j = 0; av[i][j] != '\0'; j++, length++)
			continue;
	}

	cat = malloc(sizeof(char) * length + 1);

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, buff++)
	{
		for (j = 0; av[i][j] != '\0'; j++, buff++)
			cat[buff] = av[i][j];
		cat[buff] = '\n';
	}
	cat[buff] = '\0';
	return (cat);
}
