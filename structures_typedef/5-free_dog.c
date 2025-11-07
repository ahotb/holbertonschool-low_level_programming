#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog- prints buffer in hexa
 * @d: pointer
 */
void free_dog(dog_t *d)
{

free(d);
}
