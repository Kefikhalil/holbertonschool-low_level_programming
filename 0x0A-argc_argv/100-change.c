#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the minimum number of coins
 * @argc: size
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
int amount = 0, nb_coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = atoi(argv[1]);

if (amount < 0)
amount = 0;

nb_coins = get_coin_number(amount, nb_coins);
printf("%d\n", nb_coins);

return (0);
}

/**
 * get_coin_number - prints the minimum number of coins
 * @amount: amount
 * @nb_coins: number
 * Return: 0
 */

int get_coin_number(int amount, int nb_coins)
{

while (amount)
{
if (amount / 25)
{
amount -= 25;
nb_coins++;
}
else if (amount / 10)
{
amount -= 10;
nb_coins++;
}
else if (amount / 5)
{
amount -= 5;
nb_coins++;
}
else if (amount / 2)
{
amount -= 2;
nb_coins++;
}
else
{
amount--;
nb_coins++;
}
}
return (nb_coins);
}
