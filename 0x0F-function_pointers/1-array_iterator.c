#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: pointer
 * @size: array
 * @action: function pointer
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int x))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; ++i)
action(array[i]);
}
}
