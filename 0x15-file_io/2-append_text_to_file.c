#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to be written in the file
 * Return: returns 1 on success or -1 when failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0; /*length or size of text_content*/
	int file; /*file discreptor*/

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		len = write(file, text_content, len);
		if (len == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
