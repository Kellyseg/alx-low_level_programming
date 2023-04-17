#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - defines new name for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
