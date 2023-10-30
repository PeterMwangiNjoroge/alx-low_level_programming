#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_buffer - set buffer size.
* @file: pointer to file
* Return: char
*/
char *set_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_f - close descriptors.
* @fd: int arg.
* Return: nothing
*/
void close_f(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* error_exit - implements error exit
* @code: int
* @message: pointer
* @arg: pointer
* Return: nothing
*/
void error_exit(int code, const char *message, const char *arg)
{

	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
* main - cp file_a file_b
* @argc: arguments
* @argv: list of args
* Return: 0
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = set_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_f(from);
	close_f(to);

	return (0);
}
