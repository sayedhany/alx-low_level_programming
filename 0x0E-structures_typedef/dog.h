#ifndef DOG_H
#define DOG_H

/**
 * struct dog - list dates abouts pet
 * @name: name
 * @age: age
 * @owner: owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
