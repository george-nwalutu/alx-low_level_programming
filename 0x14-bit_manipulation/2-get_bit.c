#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index in an unsigned long integer
 * @n: the unsigned long integer to search for the bit
 * @index: the index of the bit to return
 *
 * Return: the value of the bit at the given index,
 * or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	bit_val = (n >> index) & 1;

	return (bit_val);
}
