#include "main.h"
#include <stdio.h>
/**
 * main - To print a Fizz Buzz program
 * Return: 0 (Success)
 */
int main(void)
{
int t;
for (t = 1; t <= 100; t++)
{
if ((t % 3 == 0) && (t % 5 == 0))
{
printf("FizzBuss");
}
else if (t % 3 == 0)
{
printf("Fizz");
}
else if (t % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", t);
}
if (t != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
