#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int t, n, sum1 = 0; sum2 = 0;
for (t = 0; t <= (size * size); t = t + size + 1)
sum1 = sum1 + a[t];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + a[n];
printf("%d, %d\n", sum1, sum2);
}
