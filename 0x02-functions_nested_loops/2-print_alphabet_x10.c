#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
		{
			for (b = 97; b <= 122; b++)
				{
					_putchar(b);
				}
			_putchar("\n");
			a++;
		}
	return (0);
}
