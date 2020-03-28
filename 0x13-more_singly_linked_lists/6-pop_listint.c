#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: list
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{

int n;
listint_t *ptr = *head;

if (*head == NULL)
return (0);

n = ptr->n;
free(ptr);
*head = ptr->next;
return (n);
}
