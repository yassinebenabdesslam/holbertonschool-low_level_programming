


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j, c, k;

for (i = '0'; i <= '9' ; i++)
{
for (j = '0'; j <= '9' ; j++)
{
for (c = '0'; c <= '9' ; c++)
{
for (k = '0'; k <= '9'; k++)
{
if ((i * 10  + j) < (c * 10 + k))
{
putchar(i);
putchar(j);
putchar(' ');
putchar(c);
putchar(k);
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
