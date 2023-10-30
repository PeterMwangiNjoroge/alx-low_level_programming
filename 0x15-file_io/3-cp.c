#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
* error_exit - error printer
* @code: code
* @message: message
* @arg: arg
* Return: void
*/
void error_exit(int code, const char *message, const char *arg)
{

	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
* close_t - closes filedescriptor
* @fd_from: int file descriptor
* @fd_to: int file descriptor
* Return: void
*/
void close_t(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		char fd_str[20];

		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
	if (close(fd_to) == -1)
	{
		char fd_str[20];

		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
}

/**
* main - check the code
* @argc: arguments
* @argv: arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char *file_from, *file_to, buffer[BUFSIZE];

	int fd_from, fd_to, bool_2;

	ssize_t bytes_read, bytes_written;

	file_from = argv[1];
	file_to = argv[2];
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	bool_2 = S_IRUSR | S_IWUSR | S_IRGRP;

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, bool_2);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	close_t(fd_from, fd_to);
	chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	return (0);
}
