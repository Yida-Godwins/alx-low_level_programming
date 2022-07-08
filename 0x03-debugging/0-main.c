#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
int n;
srand(time(0));
n = rand() -RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
