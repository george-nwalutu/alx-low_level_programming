#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - program that Reads a text file and prints it to STDOUT.
 * @filename: The name of the text file to be read.
 * @num_chars: The number of characters to be read.
 *
 * Return: The actual number of bytes read and printed.
 *         Returns 0 when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t num_chars)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(*buffer) * num_chars);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, num_chars);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
