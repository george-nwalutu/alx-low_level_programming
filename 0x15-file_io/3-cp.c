#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file_descriptor(int fd);

/**
 * allocate_buffer - program that Allocates 1024 bytes of
 * memory for a buffer.
 * @file: The name of the file the buffer is storing
 * characters for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that Copies the contents
 * of a file to another file.
 * @argc: That number of arguments
 * supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect,
 * exit code 97 is returned.
 * If file_from does not exist or cannot be read,
 * exit code 98 is returned.
 * If file_to cannot be created or written to, e
 * xit code 99 is returned.
 * If file_to or file_from cannot be closed,
 * exit code 100 is returned.
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	input_fd = open(argv[1], O_RDONLY);
	read_result = read(input_fd, buffer, 1024);
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (input_fd == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(output_fd, buffer, read_result);

		if (output_fd == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_result = read(input_fd, buffer, 1024);
		output_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_result > 0);

	close_file_descriptor(input_fd);
	close_file_descriptor(output_fd);
	free(buffer);

	return (0);
}

