#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: size
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int sum = 0, i = 1;

while (i < argc)
{
if (is_integer(argv[i]))
sum += atoi(argv[i]);

else
{
printf("Error\n");
return (1);
}

i++;
}

printf("%d\n", sum);

return (0);
}

/**
 * is_integer - adds positive numbers
 * @str: string
 * Return: 0
 */

int is_integer(const char *str)
{
int i = 0;

while (str[i])
{
if (!isdigit(str[i]))
return (0);

i++;
}

return (1);
}
