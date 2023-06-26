#include "main.h"
/**
 * _puts - To print a string
 * @str: The string to print
 * Return: Void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_puts(str);
}
_puts('\n');
}
