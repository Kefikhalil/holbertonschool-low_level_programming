#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *the_punisher;

while (head)
{
the_punisher = head->next;
free(head);
head = the_punisher;
}
}
