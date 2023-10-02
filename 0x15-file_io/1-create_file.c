#include "main.h"

/**
 * create_file - program that creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: on success, returns 1; on failure, returns -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, text_length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
