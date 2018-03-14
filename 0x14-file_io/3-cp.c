#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 *
 * @ac: argument count
 * @av: arguments, passed to a program
 *
 * Return: always 0
 */
int main(int ac, char *av[])
{
	int file_from, file_to, rd, wr;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDWR);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2],  O_RDWR | O_TRUNC);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	rd = read(file_from, buff, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	wr = write(file_to, buff, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close(file_from);
	close(file_to);
	return (0);
}
