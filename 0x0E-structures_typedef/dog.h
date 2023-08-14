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
/**
  *dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
