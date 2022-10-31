#include "main.h"

/**
*create_file - function that creates a file.
*@filename: name of the file
*@text_content: content of the new file
*Return: returns 1 on success or -1 if fails
*/


int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);

	if (fd == -1)
		return (-1);
	i = write(fd, text_content, strlen(text_content));
	if (i == -1)
		return (-1);
	return (1);
}

