#include "main.h"

/**
 *print_alphabet - prints alphabets in lowercase
 *
 *Return: Always 0.
 */

void print_alphabet(void)
{
char alpa;

for (alpa = 'a'; alpa <= 'z'; alpa++)
{
_putchar(alpa);
}
_putchar('\n');
}
