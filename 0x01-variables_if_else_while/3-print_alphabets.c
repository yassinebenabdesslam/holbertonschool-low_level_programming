#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, r;
for (c = 'a' ; c <= 'z'; c++)
{
putchar(c);
}
for (r = 'A' ; r <= 'Z'; c++)
{
putchar(r);
}
putchar('\n');
return (0);
}

