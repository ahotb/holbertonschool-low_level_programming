#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog- frest dog
* @d:oen
* @name:oen
* @age:oen
* @owner:oen
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
