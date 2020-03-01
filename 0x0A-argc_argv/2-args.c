#include <stdio.h>

/**
 * main - prints all arguements it receives
 * @argc: argument
 * @argv: string
 * Return: 0
 */

int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
