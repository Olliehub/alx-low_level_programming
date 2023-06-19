#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This prints a struct dog
 * @d: struct dog
 *
 * Retrun: no return.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
