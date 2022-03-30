#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
