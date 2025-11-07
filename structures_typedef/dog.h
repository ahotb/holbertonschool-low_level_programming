#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with basic info.
 * typedef struct dog dog_t- : Represents a dog with basic info.
 * @name: Pointer to dog's name.
 * @age: Age of the dog as a float.
 * @owner: Pointer to owner's name.
 * This struct holds essential data about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
