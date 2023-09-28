#include "main.h"

/**
 * get_endianness - the function that checks the endianness
 *
 * Return: for the bigger endian return 0,
 * 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *j;

	k = 1;
	j = (char *)&k;
	return (*j);
}

