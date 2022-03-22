#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return - nothing
 */

void puts_half(char *str)
{
	int i, j, k;
	int len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (k = (len - 1) / 2; k < len - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
}
