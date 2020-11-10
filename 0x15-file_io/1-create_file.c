#include "holberton.h"
/**
* create_file - creates a file
* @filename: name of file to create
* @text_content: content to write to file
*
* Return: -1 on error, 1 on success
*/
int create_file(const char *filename, char *text_content)
{
	int cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	int state = -1, i, wid;

	if (cf == -1 || filename == NULL)
		return (state);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			wid = write(cf, &text_content[i], sizeof(text_content[i]));
			if (wid == -1)
				return (state);
		}
	}
	close(cf);
	return (state * -1);
}
