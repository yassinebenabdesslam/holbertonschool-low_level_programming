#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n:int n
 * Return: Always 0.
 */
void print_to_98(int n)


{
int  i;
for (i = n; i <= 98; i++)
{
if (i >= 10)
{
if (i != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');

}
else
{
if (i != n)
{
_putchar(',');
_putchar(' ');
}
_putchar(i);
}

putchar('\n');
}
}
