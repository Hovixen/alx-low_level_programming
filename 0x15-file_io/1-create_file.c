#include "main.h"

/**
 * create_file - function creates a file
 * @filename: name of file to be created
 * @text_content: content to be written in the created file
 * Return: returns 1 on success or -1 when failed
 */

int create_file(const char *filename, char *text_content)
{
	int file ; /*file descriptor*/
	ssize_t len = 0; /*length or size of the content*/

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

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
	return (1);
}
