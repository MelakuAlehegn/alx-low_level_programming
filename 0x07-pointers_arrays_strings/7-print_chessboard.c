#include "main.h"
/**
 * print_chessboard - prints the checkboard
 * @a: input array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
