#include <stdio.h>

/**
 *main - starting point
 *
 *Return: Aways (0)
 */
int main(void)
{
int oldnum = 1;
int curnum = 1;
int nextnum;

printf("%d\n", curnum);
while (num < 50)
{
printf("%d\n", curnum);
nextnum = curnum + oldnum;
oldnum = curnum;
curnum = nextnum;
}
return (0);
}
