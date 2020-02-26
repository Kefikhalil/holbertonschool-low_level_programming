#include "holberon.h"

/**
 * prime_checker - check if a number is prime
 * @n: number
 * @d: number
 *
 * Return: 0
 */

int prime_checker(int n, int d)
{
if (n % d == 0)
return (0);
if (d > n / 2)
return (1);
return (prime_checker(n, d + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (prime_checker(n, 2))
return (1);
return (0);
}
