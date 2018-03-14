#include "holberton.h"

/**
 * _strlen - return lenght of the str
 *
 * @str: pointer to a first element of str
 *
 * Return: lenght of str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * create_file - creates a file.
 *
 * @filename: name of the file to create
 * @text_content: text_content is a NULL terminated string
 * to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, 600);
	if (fd == -1)
	{
		return (0);
	}
	write(fd, text_content, _strlen(text_content);
	close(fd);
	return (1);
}
