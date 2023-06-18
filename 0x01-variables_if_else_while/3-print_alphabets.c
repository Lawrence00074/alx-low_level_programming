#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
char t;
char p;
t = 'a';
p = 'A';
while
(t <= 'z') {
putchar(t);
t++;
}
while
(p <= 'Z') {
putchar(p);
p++;
}
putchar('\n');
return (0);
}
