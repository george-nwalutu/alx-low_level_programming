#include "main.h"
/**
 * _strcat - program that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int s;
	int j;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[s] = src[j];
		s++;
		j++;
	}

	dest[s] = '\0';
	return (dest);
}
