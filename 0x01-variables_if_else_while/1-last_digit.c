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
int n r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
if (r > 5)
{
printf("last digit of %d and is greater than %d \n", n, r);
}
else if (r == 0)
{
printf("last digit of %d and is less than %d and is 0 \n", n, r);
}
else if (r != 0 && r < 6)
{
printf("last digit of %d and is less than 6 and not 0 \n", n, r);
}
return (0);
}
