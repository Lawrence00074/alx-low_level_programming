#include <stdio.h>
#include "main.h"
/**
 * main - Print the largest prime factor of a number
 * Return: 0 (Success)
 */
int main(void)
{
long t, maxs;
long number = 612852475143;
double square = sqrt(number);
for (t = 1; t <= square; t++)
{
if (number % t == 0)
{
maxs = number / t;
}
}
printf("%ld\n", maxs);
return (0);
}
