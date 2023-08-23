#include "main.h"
/**
 * _strncat - program that concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s;
	int j;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[s] = src[j];
		s++;
		j++;
	}
	dest[s] = '\0';
	return (dest);
}

