#include "holberton.h"
/**
 *swap_int - swaping a with b
 *@a: variable
 *@b: variable
 *Return: swap
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
