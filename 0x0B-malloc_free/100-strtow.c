#include "holberton.h"
/**
* strtow - converts a string into words
* @str: input string
*
* Return: null on fail, new array on success
*/
char **strtow(char *str)
{
	int i, tmplen, wc = 0, fail, win = 0, k;
	char **tokens;

	if (str == NULL)
		return(NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != ' ')
		{
			i++;
			if (str[i] == ' ' || str[i] == '\0')
				wc++;
		}
	}
	/* this is the logic used to attain the word count needed for the 2D array.*/
	tokens = malloc(sizeof(char) * wc);

	if (tokens == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < wc; k++)
	{
		for (i = 0, tmplen = 0; str[i] != ' '; i++, tmplen++)
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				break;
			}
		}
		*(tokens + k) = malloc(sizeof(char) * tmplen + 1);
		if (*(tokens + k) == NULL)
		{
			for (fail = 0; fail <= k; fail++)
				free(tokens[fail]);
			free(tokens);
			return (NULL);
		}
		for (win = 0; win < tmplen; win++)
		{
			tokens[k][win] = str[(i - tmplen) + win];
		}
		tokens[k][win] = '\0';
		
	}
	return (tokens);
}
