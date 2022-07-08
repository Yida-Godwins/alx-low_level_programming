#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)

/* negatives */
if (n < 0)
{
_putchar('-');
n = -n
}
/* count up */
m = 1;
c = 1;
while (c)
{
if (num / (m * 10) > 0)
m *= 10;
else
c = 0;
}
/* count down */
while (num >= 0)
{
if (m == 1)
{
_putchar(num % 10 + '0');
num = -1;
}
else
{
_putchar((num / m % 10) + '0');
m /= 10;
}
}
}
