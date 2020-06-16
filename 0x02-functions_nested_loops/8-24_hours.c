#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i, j, c, k;

for (i = '0'; i <= '2'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (c = '0'; c <= '5'; c++)
{
for (k = '0'; k <= '9'; k++)
{
if (i == '2' && j >= '4')
{
}
else
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(c);
_putchar(k);
_putchar('\n');
}
}
}
}
}
}
