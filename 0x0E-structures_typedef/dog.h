#ifndef dog_h
#define dog_h

/**
 * struct dog - a structure for named dog
 * @name: variable holding the name of the dog
 * @age: variable holding the age of the dog
 * @owner: variable holding the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *l);
char *_strcpy(char *store, char *read);

#endif
