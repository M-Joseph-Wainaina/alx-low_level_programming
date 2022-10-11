#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: memmory to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
