#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - frees the space allocated for the structure dog
  *@dog_t - the structure dog_t
  *@d: pointer to the structure
  *Return< Void
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
