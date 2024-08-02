#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: File
 * @letters: Number of letters to be printed
 * Return: Letters printed and readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t nbytes = 0, nwritten = 0;

	str = malloc(letters);
	if (str == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nbytes = read(fd, str, letters);
	if (nbytes == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	nwritten = write(fd, str, nbytes);
	free(str);
	close(fd);
	return (nwritten);
}
