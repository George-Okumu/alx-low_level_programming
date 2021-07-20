#include "dog.h"
#include <stdio.h>
/**
 * print_dog - for printing struct dog
 * @d: data holder
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("\n");
}

if (!(d->name || d->age || d->owner))
{
printf("nil\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}


}
