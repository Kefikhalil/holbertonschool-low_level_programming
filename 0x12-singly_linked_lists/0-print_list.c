#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
int i;
size_t node = 0;
char *c;

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
node++;
h = h->next;
}
return (node);
}
