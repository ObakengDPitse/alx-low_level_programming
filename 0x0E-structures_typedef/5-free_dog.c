#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog struct
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

