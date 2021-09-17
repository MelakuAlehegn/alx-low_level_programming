#include  "main.h"

/**
 *_puts_recursion - prints a string
 *
 *@s: string to be printed
 *Return: 0
 **/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	puts_recursion(s + 1);
}