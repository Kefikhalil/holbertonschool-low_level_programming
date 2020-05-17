#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer
 *
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i;

while (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
