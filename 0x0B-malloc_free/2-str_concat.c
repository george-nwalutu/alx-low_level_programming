#include "main.h"
#include <stdlib.h>
/**
 * str_concat - program that get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = cj = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cj] != '\0')
		cj++;
	conct = malloc(sizeof(char) * (i + cj + 1));

	if (conct == NULL)
		return (NULL);
	i = cj = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[cj] != '\0')
	{
		conct[i] = s2[cj];
		i++, cj++;
	}
	conct[i] = '\0';
	return (conct);
}
