/*
* File: 0-read_textfile.c
* Author: Peter Njoroge
*/

#include <stdlib.h>
#include "main.h"

/**
* get_endianness - checks the endianness.
* Return: 0 if big endian, 1 if little endian
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
        return (0);
    }

    buffer = (char *)malloc(letters);

    if (!buffer)
    {
        close(descriptor);
        return (0);
    }

    b_r = read(descriptor, buffer, letters);
    if (b_r == -1)
    {
        close(descriptor);
        free(buffer);
        return (0);
    }

    b_w = write(STDOUT_FILENO, buffer, b_r);
    if (b_w == -1 || b_w != b_r)
    {
        close(descriptor);
        free(buffer);
        return (0);
    }

    close(descriptor);
    free(buffer);
    return (b_w);

}