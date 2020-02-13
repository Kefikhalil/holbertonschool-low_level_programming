#include "holberton.h"

/**
 * _isdigit - checks if int c is a digit or not
 *
 * @c: int c
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
