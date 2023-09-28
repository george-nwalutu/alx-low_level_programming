#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to modify
 * @index: index at which to clear bit
 *
 * This function clears the bit at the specified index in the unsigned long
 * Return: It returns 1 if successful, or -1 if an error
 * occurred. If the index is greater than or equal to the number of bits in
 * an unsigned long integer, the function returns -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = ~(1UL << index);
	*n &= mask;

	return (1);
}

