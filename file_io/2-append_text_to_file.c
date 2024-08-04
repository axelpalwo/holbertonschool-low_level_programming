#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: Text to append
 * Return: 1 Succes / -1 Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
