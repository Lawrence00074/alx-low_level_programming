#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point, program will assign a random number
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, d);
if (m == 0)
printf("Last digit of %d is %d and is 0\n", n, d);
if (m < 6 && m != 0)
printf("Last digit of %d os %d and is less than 6 and not 0\n"), n, d);
return (0);
}
