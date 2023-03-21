#include "dog.h"
#include <stdio.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	
	if (new == NULL)
		return (0);
	if (name == NULL)
	{
		free(new);
		free(owner);
		return (0);
	}
	if (owner == NULL)
	{
		free(new);
		free(name);
		return (0);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (p);
}
