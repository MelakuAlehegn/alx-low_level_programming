
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*void print_numbers - prints numbers followed by a new line.
* @n: number
 *
 * Return: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list valist;

va_start(valist, n);
for (i = 0; i < n; i++)
{
num = va_arg(valist, int);
printf("%d", num);
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
