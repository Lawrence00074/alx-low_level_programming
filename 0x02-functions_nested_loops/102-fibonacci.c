#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
int h;
long int n1, n2, fn;
n1 = 1;
n2 = 2;
printf("%ld, %ld", n1, n2);
for (h = 0; h < 48; h++)
{
fn = n1 + n2;
printf(", %ld", fn);
n1 = n2;
n2 = fn;
}
printf("\n");
return (0);
}
