#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
int g = 0; int q;
while (str[g] != '\0')
{
g = g + 1;
}
if (g % 2 == 1)
{
q = (g - 1) / 2; q += 1;
}
else
{
q = g / 2;
}
for (; q < g; q++)
{
_putchar(str[q]);
}
_putchar('\n');
}
