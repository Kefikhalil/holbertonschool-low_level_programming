#include "holberton.h"
/**
 *_isupper - check if c is uppercase
 *
 *@c : integer c
 *Return: return 1 if c is uppercase else 0
 **/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
