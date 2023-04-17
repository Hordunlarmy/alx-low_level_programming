#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - data type
 *  @name: pointer member
 *  @age: second member variable
 *  @owner: third member of struct dog type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
