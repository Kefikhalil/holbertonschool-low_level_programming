#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = y;

while (i = 0; tmp; i++)
{	
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
