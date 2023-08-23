#include "main.h"
#include <stdio.h>

/**
 * rot13 - a program that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int p;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[p] == data1[j])
			{
				s[p] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
