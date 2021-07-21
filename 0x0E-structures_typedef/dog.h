#ifndef DOG_H
#define DOG_H
/**
 * struct dog - check the code for ALX School students.
 * @name: name
 * @age: age
 * @owner: owner
 * Above is for making Betty happy
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
/*typedef is just a way to alias a type with a specific name*/

void init_dog(struct dog *d, char *name, float age, char *owner);
/*prints a struct dog*/
void print_dog(struct dog *d);
#endif
