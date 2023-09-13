#include "dog.h"

/**
 * _strlen -a function that gets a length of string
 * @str: the string to get the length
 * Return: length og @str
 */

int _strlen(const char *str)
{       
        int length = 0
                
        while (*str++)
                length++;
        return (length);
}       

/** * _strcopy - a function I’m that returns @dest with a copy of a string from @src
 * @src: string to copy
 * @des: copy string to here
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{       
        int i;
        
        for (i = 0; src[i];i++)
                dest[i] = src[i];
        dest[i] = '\0';
        
        return (dest);
}       

/**
 * new_dog - a function that creates a new dog
 * @name: name of a dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct pointer of dog
 * NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (!name ||age <0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name =malloc(
