#include <stdio.h>

/**
 * main - program that finds and prints the sum,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, c, next, sum;

	j = 1;
	c = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + c;
		j = c;
		c = next;
	}

	printf("%lu\n", sum);

	return (0);
}

