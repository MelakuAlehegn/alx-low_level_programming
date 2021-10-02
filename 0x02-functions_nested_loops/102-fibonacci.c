#include <stdio.h>

/**
 *main - starting point
 *
 *Return: Always (0)
 */
int main(void)
{
int c = 1;
int a = 1;
int b = 1;
   
while(c < 50)
{
printf("%d\n",c);
a = b;
b = c;
c = a + b;
}
return (0);
}
