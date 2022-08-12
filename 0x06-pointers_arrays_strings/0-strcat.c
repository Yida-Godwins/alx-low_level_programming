#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination input
 * @src: pointer to source input
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)

{
int  i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
