#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: list
 *
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{

int c = 0;

while (h)
{
h = h->next;
c++;
}
return (c);
}
