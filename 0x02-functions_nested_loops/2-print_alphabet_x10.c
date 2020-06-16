#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
char i2;
for (i = 0; i <= 9; i++)
{
for (i2 = 'a' ; i2 <= 'z' ; i2++)
_putchar(i2);
_putchar('\n');
}
}

