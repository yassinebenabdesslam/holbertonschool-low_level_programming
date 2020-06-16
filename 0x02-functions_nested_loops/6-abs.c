#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @r: int r
 * Return: Always 0.
 */
int _abs(int r)
{
if (r < 0)
{
return (r * (-1));
}
else if (r == 0)
{
return (0);
}
else
{
return (r);
}
}
