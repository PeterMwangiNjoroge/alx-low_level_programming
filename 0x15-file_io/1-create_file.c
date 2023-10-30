/*
* File: 1-create_file.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include "main.h"

/**
* create_file - creates a file.
* @filename: pointer to file
* @text_content: file_to_read
* Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int descriptor, counter = 0, b_w;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		for (counter = 0; text_content[counter];)
		{
			counter++;
		}
	}

	descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b_w = write(descriptor, text_content, counter);

	if (descriptor == -1 || b_w == -1)
	{
		return (-1);
	}

	close(descriptor);

	return (1);

}
