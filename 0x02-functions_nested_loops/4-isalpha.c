#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: int
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
