#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n:int n
 * Return: Always 0.
 */
void print_to_98(int n)

{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
}
}
else if (n >= 98)

{
for (i = n; i <= 98; i--)
{
printf("%d", i);
}
}
}
