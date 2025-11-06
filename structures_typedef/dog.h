#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with basic info.
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
#endif
