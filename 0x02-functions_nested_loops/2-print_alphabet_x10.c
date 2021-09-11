#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 *Return: Always 0.
 */

void print_alphabet_x10(void)
{
char alpa;
int n = 0;

while (n <= 9)
{
for (alpa = 'a'; alpa <= 'z'; alpa++)
{
_putchar(alpa);
}
_putchar('\n');
}
}
