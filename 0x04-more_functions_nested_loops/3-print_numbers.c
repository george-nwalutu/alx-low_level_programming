#include "main.h"

/**
 * print_numbers - Writing a program that print 0-9
 * return: void
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
