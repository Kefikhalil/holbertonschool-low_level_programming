#include "lists.h"

/**
 * print_listint - print list
 * @h: list to print
 *
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{

int y = 0;
for (h)
{
printf("%d\n", h->n);
h = h->next;
y++;
}
return (y);
}
