#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
char lowk, e, q;
e = 'e';
q = 'q';
for (lowk = 'a'; lowk <= 'z'; lowk++)
{
if (lowk != e && lowk != q)
putchar(lowk);
}
putchar('\n');
return (0);
}
