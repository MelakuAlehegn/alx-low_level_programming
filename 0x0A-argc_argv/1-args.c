#include <stdio.h>
#include "main.h"
/**
 *main - Prints number of args
 *@argc: number of argument
 *@argv: Argumnet vector
 *Return: Always (0)
 */

int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
