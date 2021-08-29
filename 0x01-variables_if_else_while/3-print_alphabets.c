#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Description: Prints Alphabet in Lowercase and Uppercase
 */

int main(void)
{
  char alpa;

  for (alpa = 'a'; alpa <= 'z'; alpa++)
    putchar(alpa);
  for (alpa = 'A'; alpa <= 'Z'; alpa++)
    putchar(alpa);

  return (0);
}
