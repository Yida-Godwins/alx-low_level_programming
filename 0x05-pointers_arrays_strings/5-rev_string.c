#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
int x,y,z;
y = 0
z = 0
char aux;
a = s;
while (s[y] != '\0')
y++;
z=y-1;
for (x = 0; x < (y / 2); x++)
{
aux = s[x];
s[x] =s[z];
s[z] = aux;
z -=1;
}
