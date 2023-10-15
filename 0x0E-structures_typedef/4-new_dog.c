#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - returns length of a string
 * @str: string to be counted
 * Return: returns length of string
 */
int _strlen(const char *str)
{
	int lenth = 0;

	while (*str++)
		lenth++;

	return (lenth);
}


/**
 * _strcopy - copy string pointed by src into dest variable
 * @dest: copy string to here
 *
 * @src: string to copy
 *
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] ; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}




/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * 
 * Return: returns NULL in case of failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog - (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
