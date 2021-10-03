#include "main.h"

/**
 *print_diagonal - prints diagonal n times
 *@n: Input
 *Return: Nothing return
 */

void print_diagonal(int n)
{
int m, n;

if (n <= 0)
{
_putchar('\n');
}
if(n > 0)
{
for (m = 1; m <= n; m++)
{
for (n = m; n > 1; n--)
{
_putchar(32);
}
}
else
{
_putchar('\n');
}

_putchar('\n');
}
}
