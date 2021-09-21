#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - prints product of two numbers
 *@argc: number of argument
 *@argv: Argumnet vector
 *Return: 1 if function works 0 for error
 */
int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
return (0);
}
