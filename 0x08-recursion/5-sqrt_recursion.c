#include "holberton.h"

/**
 * perfect_square_checker - checks if x * n is a square
 * @x: number
 * @n: number
 *
 * Return: 0
 */

int perfect_square_checker(int x, int n)
{
if (x * x == n)
return (x);
if (x > n / 2)
return (0);
return (perfect_square_checker(x + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
if (perfect_square_checker(1, n) == 0)
return (-1);
return (perfect_square_checker(1, n));
}
