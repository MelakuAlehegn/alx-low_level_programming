#include <stdio.h>
#include "main.h"
/**
 *main - Prints its name
 *@argc: number of argument
 *@argv: Argumnet vector
 *Return: Always (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argc-1);

	return (0);
}
