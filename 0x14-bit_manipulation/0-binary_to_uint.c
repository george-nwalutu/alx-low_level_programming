#include "main.h"

/**
 * binary_to_uint - program that converts a binary number in
 * string format to an unsigned integer
 * @b: a pointer to the string containing the binary number
 *
 * Return: the converted unsigned integer, or 0 if the
 * string contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) | (*b - '0');

		b++;
	}

	return (result);
}
