#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *print_dog - prints the structure dog
  *@d: pointer to the struct dog
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("Owner: %s\n", d->owner);

}
