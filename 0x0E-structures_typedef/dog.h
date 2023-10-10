#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog
 * @name: first member, holds the dog name
 * @owner: second member, holds the dog's owner
 * @age: third member, holds the dog's age
 * Describtion: a data type of dog that holds important informations
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
