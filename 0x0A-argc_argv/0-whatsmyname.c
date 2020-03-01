#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc == 1)
printf("%s\n", argv[0]);
else
{
argv[0] = argv[4];
printf("%s\n", argv[0]);
}
return (0);
}
