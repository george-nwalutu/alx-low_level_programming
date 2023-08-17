#include "main.h"
/**
 * print_triangle - Write a program that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c, j;

		for (c = 1; c <= size; c++)
		{
			for (j = c; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= c; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
