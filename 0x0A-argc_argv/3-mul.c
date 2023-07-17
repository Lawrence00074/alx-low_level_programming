#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
int t, o;
if (argc < 3)
{
printf("Error\n");
return (1);
}
t = atoi(argv[1]);
o = atoi(argv[2]);
printf("%d\n", t * o);
return (0);
}
