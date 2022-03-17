#include "main.h"
/**
 * more_numbers - prints 10 times 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		j++;
	}
}
