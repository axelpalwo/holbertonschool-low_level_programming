#include "main.h"
/**
 * pastefile - Pastes content into a file
 * @buffer: Text_content
 * @file_to: File to append content
 * @bnum: Bool
 * Return: 1 Success / -1 Failure
 */
int pastefile(char *buffer, const char *file_to, int bnum)
{
	int fd, bb = bnum;

	if (bb == 1)
		fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	else
		fd = open(file_to, O_APPEND | O_WRONLY, 0664);
	printf("El valor es bb es %i, y fd es %i", bb, fd);
	if (fd == -1)
	{
		printf("Error, Can't write to %s\n", file_to);
		exit(99);
		return (-1);
	}
	write(fd, buffer, 1024);
	if (close(fd) == -1)
	{
		printf("Error: Can't close fd %i\n", fd);
		exit(100)
			;
		return (-1);
	}
	return (1);
}
/**
 *copyfile - Copies the content of a file
 *@file_from: Text to copy
 *@file_to: File to append text
 *Return: String
 */
int copyfile(const char *file_from, const char *file_to)
{
	int fd, bnum = 1;
	ssize_t bytesread;
	char *buffer;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		return (-1);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	while ((bytesread = read(fd, buffer, 1024)) > 0)
	{
		pastefile(buffer, file_to, bnum);
		bnum = 0;
	}
	if (close(fd) == -1)
	{
		printf("Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (1);
}
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of Arguments (Strings)
 * Return: 0 Always Success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (copyfile(argv[1], argv[2]) == -1)
	{
		printf("Error: Can't write from the file %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
