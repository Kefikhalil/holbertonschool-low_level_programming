#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The linked list
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
unsigned int i;
const list_t *tmp;

tmp = h;
for (i = 0; tmp; i++)
tmp = tmp->next;
return (i);
}
