#ifndef DOG_H
#define DOG_H

/*
 * struct dog - a dog's basic information
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Description: just a lone dog struct in a big kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
