#include <stdio.h>

/**
* main -  program that prints the size of various types on the computer
*
* Return: always 0 (Success)
*/

int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
short s;

printf("Size of char: %lu bytes\n", sizeof(c));
printf("Size of short: %lu bytes\n", sizeof(s));
printf("Size of int: %lu bytes\n", sizeof(i));
printf("Size of long: %lu bytes\n", sizeof(l));
printf("Size of long long: %lu bytes\n", sizeof(ll));
printf("Size of float: %lu bytes\n", sizeof(f));
return (0);
}
