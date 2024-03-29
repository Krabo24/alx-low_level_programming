#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string returned
 * @s: string to be evaluated
 * Return:length of string
 */

int _strlen(char *s)

{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}

/**
 * *_strcpy - copy string pointed by src
 * and the terminating null byte (\0)
 * to buffer pointed by dest
 * @dest: pointer to buffer to copy string
 * @src: string to be copied
* Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int len, r;

		len = 0;

		while (src[len] != '\0')

		{
			len++;
		}

		for (r = 0; r < len; r++)

		{
			dest[r] = src[r];
		}

		dest[r] = '\0';

		return (dest);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog on Success otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)

	{
		free(dog);
		return (NULL);
	}

dog->owner = malloc(sizeof(char) * (len2 + 1));

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
