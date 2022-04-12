#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that free dogs
 * @d: pointer tp dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == 0)
return;
free(d->name);
free(d->owner);
free(d);
}
