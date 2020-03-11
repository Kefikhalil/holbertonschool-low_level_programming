#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argc 
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

if (argc != 2)
{
puts("Error");
return (1);
}
