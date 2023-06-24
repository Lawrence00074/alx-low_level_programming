#include <stdio.h>
#include "math.h"
/**
 * main - Print the largest prime factor of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
long t, maxf;
long number = 612852475143;
double square = sqrt(number);
for (t = 1; t <= square; t++)
{
if (number % t == 0)
{
maxf = number / t;
}
}
printf("%ld\n", maxf);
return (0);
}
