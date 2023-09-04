#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to
 * the POSIX standard output.
 * @filename: pointer to a constant character.
 * @letters: size of the character to be printed.
 * Return: returns the actuall number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;/*file descriptor*/
	ssize_t read_num = 0, write_num = 0;
	char instance[letters + 1];

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read_num = read(file, instance, letters);
	if (read_num == -1)
	{
		close(file);
		return (0);
	}
	instance[read_num] = '\0';

	write_num = write(STDOUT_FILENO, instance, read_num);
	if (write_num == -1)
	{
		return (0);
		close(file);
	}
	close(file);
	return (write_num);
}
