#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog- print name
* @name : poirnts
* @age : int
* @owner : poirnts
*
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int str, s, i, t;
dog_t *h;
h = malloc(sizeof(dog_t));
if (h == NULL)
{
return (NULL);
}

for (str = 0; name[str] != '\0'; str++)
;
h->name = malloc(str + 1);
if (h->name == NULL)
{
free(h);
return (NULL);
}
for (i = 0; i <= str; i++)
{
h->name[i] = name[i];
}

for (s = 0; owner[s] != '\0'; s++)
;
h->owner = malloc(s + 1);
if (h->owner == NULL)
{
free(h->name);
free(h);
return (NULL);
}
for (t = 0; t <= s; t++)
{
h->owner[t] = owner[t];
}
h->age = age;
return (h);
}
