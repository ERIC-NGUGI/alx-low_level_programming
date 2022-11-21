#ifndef DOG_H
#define DOG_H


/**
* struct dog - dog data
* @name: name of dog
* @age: age of dog
* @owner: name of owner dogs
* Description: Defines metadata about the dog and type of dogs
*/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/* function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
