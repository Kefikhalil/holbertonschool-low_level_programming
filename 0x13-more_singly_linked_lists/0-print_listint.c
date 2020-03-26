#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list
 *
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{

int i = 0;
for (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
