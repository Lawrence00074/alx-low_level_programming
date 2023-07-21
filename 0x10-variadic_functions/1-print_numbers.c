#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int s;
int num;
va_list valist;
va_start(valist, n);
for (s = 0; s < n; s++)
{
num = va_arg(valist, int);
printf("%d", num);
if (s < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
