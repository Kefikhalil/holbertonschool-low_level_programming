#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @c: char
 * @size: size
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *t;
if (size == 0)
return (NULL);

t = malloc(size * sizeof(char);
if (t == 0)
return (0);

for (i = 0 ; i < size ; i++)

t [i] = c;
return (t);
}

