#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list
 * @n: number element
 *
 * Return: 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp;

tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
return (NULL);
tmp->n = n;
tmp->next = NULL;
if (*head == NULL)
*head = tmp;
else
{
ptr = *head;
while (new->next)
new = new->next;
new->next = tmp;
}
return (new);
}
