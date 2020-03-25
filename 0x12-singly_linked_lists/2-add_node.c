#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{

int i = 0;
list_t *new;
char *copy;

while (str[i] != '\0')
i++;
new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
strcp = malloc(i);
if (copy == NULL)
{
free(new);
return (NULL);
}
copy = strdup(str);
new->str = copy;
new->len = i;
new->next = *head;
*head = new;
return (new);
}
