#include "holberton.h"
#include <stdio.h>

/**
 * _abs - compute absolute value of an int
 *@x: the int to be checked
 * Return: 0
 **/

int _abs(int x)
{
if (x >= 0)
{
return (x);
}
else
{
return (-x);
}
}
