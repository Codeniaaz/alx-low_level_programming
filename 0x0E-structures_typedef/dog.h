#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @age: float
 * @name: char
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
