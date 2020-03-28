#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: list
 */

void free_listint2(listint_t **head)
{

listint_t *next;

if (head == NULL)
return;
while (*head != NULL)
{
free = (*head)->free;
free(*head);
*head = free;
}
}
