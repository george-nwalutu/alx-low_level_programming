#include "main.h"
/**
 * reverse_array - program that reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s;
	int t;

	for (s = 0; s < n--; s++)
	{
		t = a[s];
		a[s] = a[n];
		a[n] = t;
	}
}
