#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string
 *
 * Return: 0
 */

unsigned int _strlen(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
;
return (i);
}
{
list_t *clone;

if (str == NULL)
return (NULL);
clone = malloc(sizeof(list_t));
if (clone == NULL)
return (NULL);
clone->str = strdup(str);
if (clone->str == NULL)
{
free(clone);
return (NULL);
}
clone->len = _strlen(clone->str);
clone->next = *head;
*head = clone;
return (clone);
}
