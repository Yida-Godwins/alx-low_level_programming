#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */

void puts2(char *str)
{
int m;
int d = 0;
while (str[d] != '\0')
{
d = d + 1;
}
for (m = 0; m < d; m += 2)
{
_putchar(str[m]);
}
_putchar('\n');
}
