#include "main.h"
/**
 * print_most_numbers - Print the numbers from 0 to 9
 * Decription: Print the numbers excluding 2 and 4
 * Return: The numbers from 0 to 9
 */
void print_most_numbers(void)
{
int t = 0;
for (; t <= 9; t++)
{
if (t == 2 || t == 4)
{
continue;
}
else
{
_putchar(t + '0');
}
}
_putchar('\n');
}
