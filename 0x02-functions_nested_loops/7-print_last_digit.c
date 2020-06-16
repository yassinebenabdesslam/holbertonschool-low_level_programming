#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *@n : int n
 * Return: Always 0.
 */

int print_last_digit(int n)
{
if (n < 0)
{
n = ((-1) * (n % 10));
}
else
{
n = (n % 10);
_putchar(n + '0');
return (n);
}
}
