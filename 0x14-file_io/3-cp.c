#include "holberton.h"

/**
 * error_98 - exit with code 98 and print error msg
 *
 * @str: pointer to a string str
 *
 */
void error_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * error_99 - exit with code 99 and print error msg
 *
 * @str: pointer to a string str
 *
 */
void error_99(char  *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * error_100 - exit with code 100 and print error msg
 *
 * @str: pointer to a string str
 *
 */
void error_100(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd  %s\n", str);
	exit(100);
}
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
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		error_98(av[1]);
	file_to = open(av[2],  O_RDWR | O_CREAT | O_TRUNC);
	if (file_to == -1)
		error_99(av[2]);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(file_from, buff, 1024);
		if (rd == -1)
			error_98(av[1]);
	}
	wr = write(file_to, buff, rd);
	if (wr == -1)
		error_99(av[2]);
	if (close(file_from) == -1)
		error_100(av[1]);
	if (close(file_to) == -1)
		error_100(av[2]);
	return (0);
}
