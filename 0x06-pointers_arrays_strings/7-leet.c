#include "main.h"
/**
 * leet - program that encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[p] == s1[j])
			{
				n[p] = s2[j];
			}
		}
	}
	return (n);
}
