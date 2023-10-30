/*
* File: 0-read_textfile.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: pointer to file
* @letters: file_to_read
* Return: file contents
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;

	char *buffer;

	ssize_t b_w, b_r;

	if (!filename)
	{
		return (0);
	}
	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
	{
		close(descriptor);
		return (0);
	}

	buffer = (char *)malloc(letters);

	if (!buffer)
	{
		close(descriptor);
		return (0);
	}

	b_r = read(descriptor, buffer, letters);

	b_w = write(STDOUT_FILENO, buffer, b_r);
	if (b_r == -1 || b_w == -1 || b_w != b_r)
	{
		close(descriptor);
		free(buffer);
		return (0);
	}

	close(descriptor);
	free(buffer);
	return (b_w);

}
