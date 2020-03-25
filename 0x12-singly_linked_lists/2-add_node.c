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

int c = 0;
list_t *new;
char *strcp;

while (str[c] != '\0')
c++;
new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
strcp = malloc(c);
if (strcp == NULL)
{
free(new);
return (NULL);
}
strcp = strdup(str);
new->str = strcp;
new->len = c;
new->next = *head;
*head = new;
return (new);
}
