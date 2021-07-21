#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: dog data
 */
void free_dog(dog_t *d)
{

free(d->owner);
free(d->name);
free(d);
/*free(d->age);*/
/*argument of type float is incompatible with void*/

}
