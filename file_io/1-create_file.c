#include "main.h"
/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Text content in the file
 * Return: 1 Success / -1 Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
