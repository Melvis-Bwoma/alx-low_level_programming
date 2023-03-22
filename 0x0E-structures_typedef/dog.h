#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @Rufus: Variable to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 **/

void init_dog(struct dog *Rufus, char *name, float age, char *owner)
{
	if (Rufus != NULL)
	{
		Rufus->name = name;
		Rufus->age = age;
		Rufus->owner = owner;
	}
}
