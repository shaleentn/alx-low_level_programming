#ifndef DOG_H
#define DOG_H
/**
  *struct dog - type describing dog
  *@name: pointer to the name to initialize
  *@age: age of the dog
  *@owner: pointer to owner to initilize
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
