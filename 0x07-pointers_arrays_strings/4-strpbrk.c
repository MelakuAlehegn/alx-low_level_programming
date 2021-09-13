#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - searches a string for any set of bytes
 *
 *@s: first string
 *@accept: second string
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
char *c;
char *null = NULL;
int i;
for (i = 0; i < s[i]; i++)
{
int j;
for (j = 0; j < accept[j]; j++)
{
if (s[i] = accept[j])
{
c = i + j;
return (c);
}
}
}
return (null);
}
