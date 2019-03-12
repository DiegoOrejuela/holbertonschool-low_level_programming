#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - creates a new dog.
 * @d: address object dog_t.
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
