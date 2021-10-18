#include <stdio.h>
#include "main.h"

/**
 *print_binary - prints binary
 *@n: number
 *Return: binary of a number
 **/

void print_binary(unsigned long int n)
{
int k = 32;
while (k != 0)
{
if (n & 0x01 != 0)
{
printf("1");
}
else
printf("0");
}
k--;
n >> = 1;
}
