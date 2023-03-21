#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p\n", (void *)d->name);
		else
			printf("Name: %s\n",  d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %p\n", (void *)d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
