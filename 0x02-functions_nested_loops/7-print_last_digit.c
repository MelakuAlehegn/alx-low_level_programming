#include "main.h"

/**
*print_last_digit - Prints last digit of a number
*
 *@i: Input
 *
 *Return: last digit of a number
*/

int print_last_digit(int i)
{
	int ld;

	if (i < 0)
	{
		ld = -1 * (i % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = i % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
