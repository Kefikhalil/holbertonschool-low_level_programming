#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{

int n;
size_t i = 0;
char *c;

whil (h != NULL)
{
if (h->str == NULL)
{
c = "(nil)";
n = 0;
}
else
{
c = h->str;
n = h->len;
}
printf("[%d] %s\n", n, c);
i++;
h = h->next;
}
return (i);
}
