#include <stdio.h>

/**
 *main - prints fizz_buzz
 *
 *Return: Nothing return
 */

int main(void)
{
int n;
while (n <= 100)
{
if (n % 15 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d ", n);
}
n++;
}
if (i < 100)
{
printf(" ");
}
printf("\n");
return (0);
}
