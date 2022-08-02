#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees a dog
 * @d: ppinter to dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
