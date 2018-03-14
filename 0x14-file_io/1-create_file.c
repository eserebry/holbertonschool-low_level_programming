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
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
