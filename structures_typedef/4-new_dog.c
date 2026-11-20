#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len1 = 0, len2 = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;

	while (owner[len2] != '\0')
		len2++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= len2; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
