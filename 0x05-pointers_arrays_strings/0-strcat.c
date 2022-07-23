#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{int s, j;
for (s = 0; dest[s] != '\0'; s++);
for (j = 0; src[j] != '\0'; j++)
{
dest[s] = src[j]; s++;
}
dest[s] = '\0';
return (dest);
}
