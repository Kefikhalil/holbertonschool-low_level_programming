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

char *c;
int i;
size_t n = 0;

while (h != NULL)
{
if (h->str == NULL)
{
c = "(nil)";
i = 0;
}
else
{
c = h->str;
i = h->len;
}
printf("[%d] %s\n", i, c);
n++;
h = h->next;
}
return (n);
}
