#include "main.h"

/**
 * binary_to_uint - program that converts a binary number
 * in sting format to unsigned int
 * @b: pointer to the string containing the binary number
 *
 * Return: the converted unsigned integer, or 0 if
 * the string contains non-binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decim_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decim_val = 2 * dec_val + (b[k] - '0');
	}

	return (decim_val);
}

