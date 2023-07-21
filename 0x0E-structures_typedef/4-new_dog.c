#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nl, ol, g;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (nl = 0; name[nl]; nl++)
;
nl++;
dog->name = malloc(nl *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (g = 0; g < nl; g++)
dog->name[g] = name[g];
dog->age = age;
for (ol = 0; owner[ol]; ol++)
;
ol++;
dog->owner = malloc(ol *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (g = 0; g < ol; g++)
dog->owner[g] = owner[g];
return (dog);
}
