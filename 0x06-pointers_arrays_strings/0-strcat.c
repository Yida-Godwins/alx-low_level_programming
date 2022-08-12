#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination input
 * @src: pointer to source input
 * Return: A string
 */

char *_strcat(char *dest, char *src)

{
int dlen = 0, i;
while (dest[dlen])
dlen++;

for (i = 0; src[i] != '\0'; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}
