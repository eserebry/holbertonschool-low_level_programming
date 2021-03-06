#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 *
 * @filename: pointer to a name of the textfile
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t num, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	num = read(fd, str, letters);
	if (num == -1)
		return (0);
	wr = write(STDOUT_FILENO, str, num);
	if (wr == -1)
		return (0);
	free(str);
	close(fd);
	return (num);
}
