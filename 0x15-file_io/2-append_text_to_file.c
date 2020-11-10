#include "holberton.h"
/**
* append_text_to_file - appends text to the end of file
* @filename: name of the file
* @text_content: null terminated string to put into the file
*
* Return: -1 if error, 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int cf = open(filename, O_APPEND | O_WRONLY), i, wid;

	if (cf < 0 || filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			wid = write(cf, &text_content[i], sizeof(text_content[i]));
			if (wid < 0)
				return (-1);
		}
	}
	close(cf);
	return (1);
}
