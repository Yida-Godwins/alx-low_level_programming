#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
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
printf(", ");}
}
printf("\n");
}
