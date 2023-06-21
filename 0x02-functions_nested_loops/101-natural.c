#include <stdio.h>
/**
 * main - Print the sum of all multiples
 * Return: 0 (Success)
 */
int main(void)
{
int t, z = 0;
while (t < 1024)
{
if ((t % 3 == 0) || (t % 5 == 0))
{
z += t;
}
t++;
}
printf("%d\n", z);
return (0);
}
