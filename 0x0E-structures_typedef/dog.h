#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct for name age and owner
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
