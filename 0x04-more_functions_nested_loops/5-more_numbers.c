#include "main.h"

/**
 *more_numbers - prints numbers except 2 and 4
 *Return: Nothing return
 */

void more_numbers(void)
{
int n, m;
for (m = 0; m < 9; m++)
{
for (n = 48; n <= 57; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
