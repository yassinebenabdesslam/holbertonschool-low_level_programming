#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
if (i < 9)
{
printf("%d, ", i);
}
else
{
printf("%d$", i);
}
} 
return (0);
}
