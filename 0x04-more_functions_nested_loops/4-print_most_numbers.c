#include "main.h"

/**
 * print_most_numbers - Writing a program that print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char ca;

	for (ca = '0'; ca <= '9'; ca++)
	{
		if (!(ca == '2' || ca == '4'))
			_putchar(ca);
	}
	_putchar('\n');
}
