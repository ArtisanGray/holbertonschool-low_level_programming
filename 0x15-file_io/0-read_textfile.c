#include "holberton.h"
/**
* read_textfile - reads a text file
* @filename: name of file to read
* @letters: letters to read
*
* Return: size or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	int rd, wd, openid = open(filename, O_RDONLY);
	char cwrite;

	if (openid == -1 || filename == NULL)
		return (0);

	while ((rd = read(openid, &cwrite, sizeof(cwrite))) > 0 && i < letters)
	{
		wd = write(STDOUT_FILENO, &cwrite, sizeof(cwrite));
		if (wd == -1)
			return (0);
		i++;
	}
	close(openid);
	return (i);
}
