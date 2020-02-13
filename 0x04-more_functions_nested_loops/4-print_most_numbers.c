#include "holberton.h"
/**
 *print_most_numbers - prints numbers followed by a new line
 *
 *Return: numbers from 0 to 9 followed by a new line
*/
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
{
n++;
continue;
}
_putchar(n++);
}
_putchar('\n');
}
