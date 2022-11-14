#ifndef DOG_H
#define DOG_H

/**
* struct dog - a rule to generate composite vars for dogs
*@name : name ppt
*@age: age ppt
*@owner: owner ppt
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
