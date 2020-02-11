#include "holberton.h"

/**
 * _isalpha - checks if its alphabetic char
 * @c: int to be checked
 * Return: 0
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
if (c <= 'Z' || c >= 'a')
{
return (1);
}
return (0);
}
