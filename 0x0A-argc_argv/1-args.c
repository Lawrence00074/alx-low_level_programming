#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments paased to the program
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
