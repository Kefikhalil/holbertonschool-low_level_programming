#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns pointer to a newly allocated space
 *
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
char *t;
int longeur = 0;
int i;

if (str == 0)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
longeur = longeur + 1;
}
t = malloc((longeur + 1) * sizeof(char));
if (t == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
t[i] = str[i];
t[i] = '\0';
return (t);
}
