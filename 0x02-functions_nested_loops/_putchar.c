#include <unistd.h>
/**
 * _putchar - writes the character c to stout
 * @c the character to print
 * Return: 1 (Success)
 * on error, -1 is returned, and arrno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
