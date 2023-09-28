#include "main.h"

/**
 * set_bit - function sets the value of a bit
 * to 1 at a given index.
 * @n: A pointer to the number to set
 * @index: the index of  which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
