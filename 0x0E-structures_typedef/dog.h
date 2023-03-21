#ifndef DOG_H
#define DOG_H
/**
 * struct dog - my dog
 * @name: the name of my dog
 * @owner: the owner of dog
 * @age: how old is my dog
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