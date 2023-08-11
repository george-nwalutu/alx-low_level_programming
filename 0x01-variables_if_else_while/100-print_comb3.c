#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int o, p;

	for (o = 48; o <= 56; o++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > o)
			{
				putchar(o);
				putchar(p);
				if (o != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
