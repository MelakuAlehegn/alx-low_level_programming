#include <stdio.h>
#include "main.h"
/**
 *main - Prints its name
 *@argc: number of argument
 *@argv: Argumnet vector
 *Return: Always (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argc-1);

	return (0);
}
