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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
