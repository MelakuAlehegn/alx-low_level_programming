#include <stdio.h>
11;rgb:0000/0000/0000#include "lists.h"

/**
 *print_listint - prints elements of listint_t
 *@h: list
 *Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num++;
}
return (num);
}
