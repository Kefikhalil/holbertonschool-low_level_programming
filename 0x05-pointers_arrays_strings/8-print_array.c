#include "holberton.h"
/**
*print_array -  prints n elements
*@a : 
*@n : 
*/
void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d", *(a + n - 1));
else
printf("%d, ", *(a + i));
}
printf("\n");
}
