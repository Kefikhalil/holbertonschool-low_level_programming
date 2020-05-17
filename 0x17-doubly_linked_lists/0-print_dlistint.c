#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer
 *
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

for (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
