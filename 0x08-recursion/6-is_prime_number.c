#include "holberon.h"

/**
 * prime_checker - check if a number is prime
 * @n: number
 * @d: number
 *
 * Return: 0
 */

int comparar(int n, int y)
{
int count = 0;

if (y <= n)
{
if (n % y == 0)
count++;
return (count + comparar(n, y + 1));
}
return (count);
}

/**
 *is_prime_number - returns 1 if input is a prime number
 *@n: number
 *
 *Return: 0
 */
int is_prime_number(int n)
{
if (comparar(n, 1) == 2)
return (1);
else
return (0);
}
