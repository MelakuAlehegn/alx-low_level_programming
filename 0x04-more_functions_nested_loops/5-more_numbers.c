#include "main.h"

/**
 *more_numbers - prints numbers except 2 and 4
 *Return: Nothing return
 */

void more_numbers(void)
{
int n, m;
for (m = 0; m < 10; m++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar(n / 10 + "0" );
 }
_putchar(n % 10 + "0");
}
_putchar('\n');
}
}
