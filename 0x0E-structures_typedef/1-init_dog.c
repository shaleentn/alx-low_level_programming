#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - initializes a variable for struct dog
  *@d: pointer to the variable initialized
  *@name: pointer to the name variable initialised
  *@owner: pointer to the variable owner initialised
  *@age: variable age initialised
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
