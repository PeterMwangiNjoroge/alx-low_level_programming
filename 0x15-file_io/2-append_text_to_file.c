/*
* File: 2-append_text_to_file.c
* Author: Peter Njoroge
*/

#include <string.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: pointer to file
* @text_content: file_to_read
* Return: file contents
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;

	ssize_t b_w;

	if (!filename)
	{
		return (-1);
	}

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		b_w = write(descriptor, text_content, strlen(text_content));
		if (b_w == -1)
		{
			close(descriptor);
			return (-1);
		}
	}

	close(descriptor);
	return (1);
}
