#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gives string length
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * *_strcpy - copies a string
 * @dest: string
 * @src: string
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int strlen, x;

	strlen = 0;

	while (src[strlen] != '\0')
	{
		strlen++;
	}
	for (x = 0; x < strlen; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new struct dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y;

	x = _strlen(name);
	y = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (y + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
