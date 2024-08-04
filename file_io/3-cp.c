#include "main.h"
/**
 * copyfile - Copies the content of a file
 *@file_from: Text to copy
 *Return: String
 */
char *copyfile(const char *file_from)
{
	int fd;
	ssize_t bytesread;
	char *buffer;

	fd = open(file_from, O_RDONLY, 0400);
	if (fd == -1)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
		return (NULL);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
		return (NULL);
	bytesread = read(fd, buffer, 1024);
	if (bytesread == -1)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
		return (NULL);
	}
	if (close(fd) == -1)
	{
		printf("Error: Can't close fd %i\n", fd);
		exit(100);
		return (NULL);
	}
	return (buffer);
}
/**
 * pastefile - Pastes content into a file
 * @buffer: Text_content
 * @file_to: File to append content
 * Return: 1 Success / -1 Failure
 */
int pastefile(char *buffer, const char *file_to)
{
	int fd;

	fd = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
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
		exit(100);
		return (-1);
	}
	return (1);
}
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of Arguments (Strings)
 * Return: 1 Always Success
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int result;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	
	strncpy(buffer, copyfile(argv[1]), 1024);
	if (buffer == NULL)
		return (-1);
	result = pastefile(buffer, argv[2]);
	if (result == -1)
		return (-1);
	return (1);
}
