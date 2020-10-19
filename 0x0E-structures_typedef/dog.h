#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_new;

void init_dog(struct dog *doggy, char *name, float age, char *owner);
void print_dog(struct dog *doggy);
dog_new *new_dog(char *name, float age, char *owner);
void free_dog(dog_new *dpggy);

#endif
