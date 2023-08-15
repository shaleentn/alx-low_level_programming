#include <stdlib.h>
#include "dog.h"
/**
  *_strlen - calculates the length of a string
  *@s: pointer to the string
  *Return: integer
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  *_strcpy- copies a string to another
  *@src: pointer to the source string
  *@dest: pointer to the destination string
  *Return: pointer to the destination string
  */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
/**
  *new_dog - creates a new dog from struct dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *Return: NULL if function fails. pointer to the new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;
	dog_t *brand_dog;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	brand_dog = malloc(sizeof(dog_t));
	if (brand_dog == NULL)
		return (NULL);

	brand_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (brand_dog->name == NULL)
	{
		free(brand_dog);
		return (NULL);
	}

	brand_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (brand_dog->owner == NULL)
	{
		free(brand_dog);
		free(brand_dog->name);
		return (NULL);
	}
	_strcpy(brand_dog->name, name);
	_strcpy(brand_dog->owner, owner);
	brand_dog->age = age;
	return (brand_dog);
}
