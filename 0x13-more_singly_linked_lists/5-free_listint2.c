#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: list
 */

void free_listint2(listint_t **head)
{

listint_t *free;

if (head)
{
while (*head != NULL)
{
free = *head;
*head = (*head)->next;
free(free);
}
head = NULL;
}
}
