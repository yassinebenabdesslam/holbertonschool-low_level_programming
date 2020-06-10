#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int z;
long int e;
long long int r;
float t;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(z));
printf("Size of a long int: %d byte(s)\n", sizeof(e));
printf("Size of a long long int: %d byte(s)\n", sizeof(r));
printf("Size of a float: %d byte(s)\n", sizeof(t));
return (0);
}
