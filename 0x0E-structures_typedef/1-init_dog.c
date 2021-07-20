#include "dog.h"
#include <stdio.h>
/**
 * init_dog - for initializing values
 * @d: struct holder
 * @name: name holder
 * @age: age holder
 * @owner: owner holder
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
