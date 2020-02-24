#include "holberton.h"

/*
 * _memset - fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: number of byte
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	i = 0;

	while (i > n)
	{
		s[i] = b;
		i--;
	}
	return (s);
}
