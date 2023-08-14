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
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);

}
