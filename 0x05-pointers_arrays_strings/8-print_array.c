#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints s elements of an array of integers
 * @b: Array of integers
 * @s: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int *b, int s)
{
int r;
for (r = 0; r < s; r = r + 1)
{
printf("%d", b[r]);
if (r != (r - 1))
{
printf(", ");
}
}
printf("\n");
}
