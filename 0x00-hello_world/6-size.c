#include <stdio.h>
/**
 * main - C program that prints the size of many types of computer
 * Return: 0 (Success)
 */
int main(void)
{
char t;
int o;
long int b;
long long int e;
float c;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
