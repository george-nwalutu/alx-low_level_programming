#include "main.h"

/**
 * flip_bits - program that counts the number of bits that need
 * to be flipped to convert oneunsigned long integer to another.
 *
 * @n: the first unsigned long integer.
 * @m: the second unsigned long integer.
 *
 * Return: the number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;

	unsigned int countbit = 0;

	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;

		if (current & 1)
			countbit++;
	}

	return (countbit);
}
