#include <stdio.h>

/**
* main -  program that print sizes
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

printf("Size of char: %lu byte(s)\n", sizeof(c));
printf("Size of short: %lu byte(s)\n", sizeof(s));
printf("Size of int: %lu byte(s)\n", sizeof(i));
printf("Size of long: %lu byte(s)\n", sizeof(l));
printf("Size of long long: %lu byte(s)\n", sizeof(ll));
printf("Size of float: %lu byte(s)\n", sizeof(f));
return (0);
}
